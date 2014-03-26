#!/usr/bin/env python

# @file execute.py
# @author Adam Koehler
# @date June 5, 2013
#
# @brief Python script used to execute programs for N seconds and terminate
#        them if they do not finish in time.
#

import sys
import os
import subprocess
import threading
from time import sleep


##
# @brief A task is a single process that is executed for a given amount of time
#
#       If no time is executed then no timeout will exist and the task will 
#       execute until completion
#
class Task:
    def __init__(self, timeout=None):
        self.timeout = timeout
        self.process = None

    def check_call(self, *args, **kwargs):
        "Essentially subprocess.check_call with kill switch for compatibility."
        
        def target():
            self.process = subprocess.Popen(*args, **kwargs)
            self.process.communicate()
        
        thread = threading.Thread(target=target)
        thread.start()
    
        thread.join(self.timeout)
        if thread.is_alive():
            self.process.terminate()
            thread.join()
    
        if self.process.returncode != 0:
            raise SystemError((self.process.returncode, str(args[0])))
        else:
            return 0



def printUsage():
    # Assumes command has been aliased as run 
    message = "To execute your program with the run command you must supply"
    message += " a few arguments:\n"
    message += "   1) time in seconds before forcefully terminating"
    message += " your program (optional)\n\n"
    message += "   2) the executable name\n"
    message += "   3) a.out's command line arguments (optional)\n"
    
    message += "The time (1) is used to avoid unbounded output and infinite"
    message += " loops. Please make\n"
    message += "sure to choose the lowest possible time in seconds"
"sure to choose the lowest possible time in seconds that is required.\n""    
    message += " that is required.\n"
    message += "The time is option, if left out, 5 seconds will be used.\n\n"
    message += "Command line arguments (3) will be passed on to the"
    message += " executable.\n\n"
    message += "Example run command calls:\n"
    message += "   run a.out\n"
    message += "   run 10 a.out\n"
    
    print message

def main():
    helpList = ["-h", "-help", "--help"]
    if len(sys.argv) != 2 and len(sys.argv) != 3:
        printUsage()
        sys.exit()
    elif len(sys.argv) == 2: 
        if sys.argv[1] in helpList:
               printUsage()
               sys.exit()
        else:
            cmd = sys.argv[1]
            timeout = 5
    elif len(sys.argv) == 3:
        cmd = sys.argv[1]
        timeout = int(sys.argv[2])
    
    curDirectory = os.getcwd()
    executable_path = os.path.join(curDirectory, cmd)
    
    # test for C++ source extension
    fileName, fileExtension = os.path.splitext(executable_path)
    if fileExtension == ".cpp":
        print "You cannot execute a source code file, extension .cpp"
        print "You should be executing the executable generated by g++.\n"
        print "For more information, use: run --help\n"
        sys.exit()
    
    # test to ensure file is executable
    if os.path.isfile(executable_path) and not os.access(executable_path, os.X_OK):
        print "The file you provided is not executable."
        print "You should be executing the executable generated by g++.\n"
        print "For more information, use: run --help\n"
        sys.exit()
    
    
    try:
        if os.path.isfile(executable_path):
            t = Task(timeout)
            t.check_call([executable_path])
        else:
            message = "ERROR:\n\nThe file you wish to execute cannot be found. "
            message += "Make sure you are "
            message += "in the same\ndirectory as the file "
            message += "or you are providing a proper path to it."
            message += "\n\nAttempted to execute file with path:\n   "
            message += executable_path
            message += "\n\n"
            message += "For more information, use: run --help\n"
            print message
    except SystemError as e:
        if e[0][0] == -15:
            message = "Program execution did not complete within allowed "
            message += str(timeout) + " second time period.\n"
            message += "If you wish to increase time allotment then please "
            message += "use alternate 'run' usage.\n"
            message += "For more information, use: run --help\n"
        elif e[0][0] == -11:
            message = "Program execution was terminated with a "
            message += "segmentation fault."
        else:
            message = "Program execution was aborted."
        print "\n\n"+message+"\n"
    except:
        pass

if __name__ == "__main__":
    sys.exit(main())
