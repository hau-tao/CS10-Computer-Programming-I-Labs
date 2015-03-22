//  =============== BEGIN ASSESSMENT HEADER ================
/// @file lab4.cpp
/// @brief Lab 4
///
/// @author hau_tao_1 [taoquanghau@gmail.com]
/// @date July 2, 2014
//  ================== END ASSESSMENT HEADER ===============
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int ex;
    
    cout << "Which exercise? ";
    
    cin >> ex;
    
    cout << endl;
    
    if ( ex == 1 )
    
    {

       
        string userInput = "hau"; 
        char position ='a';
        cout << "Enter a string: ";
        cin >> userInput;
        cout <<endl;
        position = userInput.at(0);
        switch (position)
        { 
            case 'a':
            cout << "a is letter 1 of the alphabet";
            break;
            
            case 'b':
            cout << "b is letter 2 of the alphabet";
            break;
            
            case 'c':
            cout << "c is letter 3 of the alphabet";
            break;
            
            case 'd':
            cout << "d is letter 4 of the alphabet";
            break;
            
            case 'e':
            cout << "e is letter 5 of the alphabet";
            break;
            
            case 'f':
            cout << "f is letter 6 of the alphabet";
            break;
            
            case 'g':
            cout << "g is letter 7 of the alphabet";
            break;
            
            case 'h':
            cout << "h is letter 8 of the alphabet";
            break;
            
            case 'i':
            cout << "i is letter 9 of the alphabet";
            break;
            
            case 'j':
            cout << "j is letter 10 of the alphabet";
            break;
            
            case 'k':
            cout << "k is letter 11 of the alphabet";
            break;
            
            case 'l':
            cout << "l is letter 12 of the alphabet";
            break;
            
            case 'm':
            cout << "m is letter 13 of the alphabet";
            break;
            
            case 'n':
            cout << "n is letter 14 of the alphabet";
            break;
            
            case 'o':
            cout << "o is letter 15 of the alphabet";
            break;
            
            case 'p':
            cout << "p is letter 16 of the alphabet";
            break;
            
            case 'q':
            cout << "q is letter 17 of the alphabet";
            break;
            
            case 'r':
            cout << "r is letter 18 of the alphabet";
            break;
            
            case 's':
            cout << "s is letter 19 of the alphabet";
            break;
            
            case 't':
            cout << "t is letter 20 of the alphabet";
            break;
            
            case 'u':
            cout << "u is letter 21 of the alphabet";
            break;
            
            case 'v':
            cout << "v is letter 22 of the alphabet";
            break;
            
            case 'w':
            cout << "w is letter 23 of the alphabet";
            break;
            
            case 'x':
            cout << "x is letter 24 of the alphabet";
            break;
            
            case 'y':
            cout << "y is letter 25 of the alphabet";
            break;
            
            case 'z':
            cout << "z is letter 26 of the alphabet";
            break;
            
            default:
            cout << "\0";
            break;
            
        }
        
    }
    
    
    else if ( ex == 2 )
    {
        char userIn ='a';
        cout << "Enter a character: ";
        cin >> userIn;
        cout << endl;
        if (userIn >= '0' && userIn <= '9')
        {
            cout << "You entered a numeric digit." << endl;
        }
            
            
        else if (userIn >= 'A' && userIn <= 'Z')
        {
            cout << "You entered an uppercase letter." << endl;
        }
            
        else if (userIn >= 'a' && userIn <= 'z')
        {
            cout << "You entered a lowercase letter." << endl;
        }
        else 
        {
            cout << "You entered an unknown character type." <<endl;
        }
            
    } 
    return 0;
            
}