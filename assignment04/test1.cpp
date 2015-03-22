#include <iostream>
#include <string>

using namespace std;

int main() 
{
    // declare and initialize these variables
    
    string userInput   = "abcde";
    string transMap    = "zyxwvutsrqponmlkjihgfedcba";
    string encrypWord  = "Encryption";
    string method      = "encryption";
    string decrypWord  = "decryption";
    // which method ??
    cout << "What is the method (encryption or decryption)? ";
    cin  >> method;
    cout << endl << endl;
    // method of decryption
    
    	
	if (method == "decryption")
	{
	    cout << "What is the translation map (type 'default' to use default): ";
	    cin >> userInput; // translation map
	    cout << endl << endl;
	    // translation map as default
	    if (userInput == "decryption")
	    {
	        cout << "What is the single word to translate: ";
	        cin >> decrypWord; // single word need to be decrypted
	        cout << endl << endl;
	        for ( int i=0; i< decrypWord.size(); ++i )
	        {
	            if (decrypWord.at (i) >='a' &&  decrypWord.at (i) <= 'z'   )
	            {
	                switch (decrypWord.at (i))
	                {
	                    case 'z':
	                    decrypWord.at(i) = transMap.at (25);
	                    break;
	                    case 'y':
	                    decrypWord.at(i) = transMap.at (24);
	                    break;
	                    case 'x':
	                    decrypWord.at(i) = transMap.at (23);
	                    break;
	                    case 'w':
	                    decrypWord.at(i) = transMap.at (22);
	                    break;
	                    case 'v':
	                    decrypWord.at(i) = transMap.at (21);
	                    break;
	                    case 'u':
	                    decrypWord.at(i) = transMap.at (20);
	                    break;
	                    case 't':
	                    decrypWord.at(i) = transMap.at (19);
	                    break;
	                    case 's':
	                    decrypWord.at(i) = transMap.at (18);
	                    break;
	                    case 'r':
	                    decrypWord.at(i) = transMap.at (17);
	                    break;
	                    case 'q':
	                    decrypWord.at(i) = transMap.at (16);
	                    break;
	                    case 'p':
	                    decrypWord.at(i) = transMap.at (15);
	                    break;
	                    case 'o':
	                    decrypWord.at(i) = transMap.at (14);
	                    break;
	                    case 'n':
	                    decrypWord.at(i) = transMap.at (13);
	                    break;
	                    case 'm': 
	                    decrypWord.at(i) = transMap.at (12);
	                    break;
	                    case 'l':
	                    decrypWord.at(i) = transMap.at (11);
	                    break;
	                    case 'k':
	                    decrypWord.at(i) = transMap.at (10);
	                    break;
	                    case 'j':
	                    decrypWord.at(i) = transMap.at (9);
	                    break;
	                    case 'i':
	                    decrypWord.at(i) = transMap.at (8);
	                    break;
	                    case 'h':
	                    decrypWord.at(i) = transMap.at (7);
	                    break;
	                    case 'g':
	                    decrypWord.at(i) = transMap.at (6);
	                    break;
	                    case 'f':
	                    decrypWord.at(i) = transMap.at (5);
	                    break;
	                    case 'e':
	                    decrypWord.at(i) = transMap.at (4);
	                    break;
	                    case 'd':
	                    decrypWord.at(i) = transMap.at (3);
	                    break;
	                    case 'c':
	                    decrypWord.at(i) = transMap.at (2);
	                    break;
	                    case 'b':
	                    decrypWord.at(i) = transMap.at (1);
	                    break;
	                    case 'a':
	                    decrypWord.at(i) =  userInput.at (0);
	                    break;
	                    default:
	                    cout <<"Error: decryption cannot be performed."<<endl;
	                    cout << endl;
	                    
	                }
	                
	            }
	           
	        }
	        cout << "decrypted word: "<< decrypWord << endl << endl ;
	        
	    }
	    else if (userInput.size() == 26)
	    {
	        cout << "What is the single word to translate: ";
            cin >> decrypWord;
            cout << endl << endl;
            for ( int i=0; i< decrypWord.size(); ++i )
            {
                char letter ='a';
                letter = decrypWord.at(i);
                if (userInput. find (letter) != string::npos)
                {
                    switch (decrypWord.at(i))
                    {
                        case 'z':
	                    decrypWord.at(i) =  userInput.at (25);
	                    break;
	                    case 'y':
	                    decrypWord.at(i) =  userInput.at (24);
	                    break;
	                    case 'x':
	                    decrypWord.at(i) =  userInput.at (23);
	                    break;
	                    case 'w':
	                    decrypWord.at(i) =  userInput.at (22);
	                    break;
	                    case 'v':
	                    decrypWord.at(i) =  userInput.at (21);
	                    break;
	                    case 'u':
	                    decrypWord.at(i) =  userInput.at (20);
	                    break;
	                    case 't':
	                    decrypWord.at(i) =  userInput.at (19);
	                    break;
	                    case 's':
	                    decrypWord.at(i) =  userInput.at (18);
	                    break;
	                    case 'r':
	                    decrypWord.at(i) =  userInput.at (17);
	                    break;
	                    case 'q':
	                    decrypWord.at(i) =  userInput.at (16);
	                    break;
	                    case 'p':
	                    decrypWord.at(i) =  userInput.at (15);
	                    break;
	                    case 'o':
	                    decrypWord.at(i) =  userInput.at (14);
	                    break;
	                    case 'n':
	                    decrypWord.at(i) =  userInput.at (13);
	                    break;
	                    case 'm': 
	                    decrypWord.at(i) =  userInput.at (12);
	                    break;
	                    case 'l':
	                    decrypWord.at(i) =  userInput.at (11);
	                    break;
	                    case 'k':
	                    decrypWord.at(i) =  userInput.at (10);
	                    break;
	                    case 'j':
	                    decrypWord.at(i) =  userInput.at (9);
	                    break;
	                    case 'i':
	                    decrypWord.at(i) =  userInput.at (8);
	                    break;
	                    case 'h':
	                    decrypWord.at(i) =  userInput.at (7);
	                    break;
	                    case 'g':
	                    decrypWord.at(i) =  userInput.at (6);
	                    break;
	                    case 'f':
	                    decrypWord.at(i) =  userInput.at (5);
	                    break;
	                    case 'e':
	                    decrypWord.at(i) =  userInput.at (4);
	                    break;
	                    case 'd':
	                    decrypWord.at(i) =  userInput.at (3);
	                    break;
	                    case 'c':
	                    decrypWord.at(i) =  userInput.at (2);
	                    break;
	                    case 'b':
	                    decrypWord.at(i) =  userInput.at (1);
	                    break;
	                    case 'a':
	                    decrypWord.at(i) =  userInput.at (0);
	                    break;
	                    default:
	                    cout <<"Error: decryption cannot be performed."<<endl;
                        
                    }
                    
                    
                }
                else if (userInput. find (letter) == string::npos)
                {
                    cout <<"decryption cannot be performed." << endl << endl;
                }
                
            }
            cout << "decrypted word: "<< decrypWord << endl << endl ;
	        
	    }
	    //invalid method choice.
	}
    