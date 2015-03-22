//  =============== BEGIN ASSESSMENT HEADER ================
/// @file cipher.cpp
/// @brief assignment03/cipher
///
/// @author hau_tao_1 [taoquanghau@gmail.com]
/// @date July 2, 2014
///
/// @par Plagiarism Section
/// I hereby certify that I have not received assistance on this assignment,
/// or used code, from ANY outside source other than the instruction team.
//  ================== END ASSESSMENT HEADER ===============
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
    // method of encryption
    if ( method == "encryption")
    {
        cout << "What is the translation map (type 'default' to use default): ";
        cin >> userInput;
        cout << endl;
        // translation map as default
        if (userInput == "default") 
        {
            cout << "What is the single word to translate: ";
            cin >> encrypWord;
            cout << endl <<endl;
            for (int i =0; i < encrypWord.size (); ++i)
            {
                switch (encrypWord.at(i))
                {
                    case 'a':
                    encrypWord.at(i) = transMap.at(0);
                    break;
                    case 'b':
                    encrypWord.at(i) = transMap.at(1);
                    break;
                    case 'c':
                    encrypWord.at(i) = transMap.at(2);
                    break;
                    case 'd':
                    encrypWord.at(i) = transMap.at(3);
                   
                    break;
                    case 'e':
                    encrypWord.at(i) = transMap.at(4);
                   
                    break;
                    case 'f':
                    encrypWord.at(i) = transMap.at(5);

                    break;
                    case 'g':
                    encrypWord.at(i) = transMap.at(6);
                    
                    break;
                    case 'h':
                    encrypWord.at(i) = transMap.at(7);
                    
                    break;
                    case 'i':
                    encrypWord.at(i) = transMap.at(8);
                     
                    break;
                    case 'j':
                    encrypWord.at(i) = transMap.at(9);
                     
                    break;
                    case 'k':
                    encrypWord.at(i) = transMap.at(10);
                     
                    break;
                    case 'l':
                    encrypWord.at(i) = transMap.at(11);
                     
                    break;
                    case 'm':
                    encrypWord.at(i) = transMap.at(12);
                     
                    break;
                    case 'n':
                    encrypWord.at(i) = transMap.at(13);
                     
                    break;
                    case 'o':
                    encrypWord.at(i) = transMap.at(14);
                     
                    break;
                    case 'p':
                    encrypWord.at(i) = transMap.at(15);
                     
                    break;
                    case 'q':
                    encrypWord.at(i) = transMap.at(16);
                     
                    break;
                    case 'r':
                    encrypWord.at(i) = transMap.at(17);
                     
                    break;
                    case 's':
                    encrypWord.at(i) = transMap.at(18);
                     
                    break;
                    case 't':
                    encrypWord.at(i) = transMap.at(19);
                     
                    break;
                    case 'u':
                    encrypWord.at(i) = transMap.at(20);
                     
                    break;
                    case 'v':
                    encrypWord.at(i) = transMap.at(21);
                     
                    break;
                    case 'w':
                    encrypWord.at(i) = transMap.at(22);
                     
                    break;
                    case 'x':
                    encrypWord.at(i) = transMap.at(23);
                     
                    break;
                    case 'y':
                    encrypWord.at(i) = transMap.at(24);
                     
                    break;
                    case 'z':
                    encrypWord.at(i) = transMap.at(25);
                     
                    break;
                    default:
                    cout << "Error: encryption cannot be performed." << endl;
                    break;
                    
                }
                
            }
            cout << "Encrypted word: "<< encrypWord << endl << endl ;
            
        }
        // check the size of translation map
        else if (userInput.size() == 26)
        {
            cout << "What is the single word to translate: ";
            cin >> encrypWord;
            cout << endl << endl;
            for (int i =0; i < encrypWord.size (); ++i)
            {
                // encrypt word
                switch (encrypWord.at(i))
                {
                    case 'a':
                    encrypWord.at(i) = userInput.at(0);
                     
                    break;
                    case 'b':
                    encrypWord.at(i) = userInput.at(1);
                     
                    break;
                    case 'c':
                    encrypWord.at(i) = userInput.at(2);
                     
                    break;
                    case 'd':
                    encrypWord.at(i) = userInput.at(3);
                     
                    break;
                    case 'e':
                    encrypWord.at(i) = userInput.at(4);
                     
                    break;
                    case 'f':
                    encrypWord.at(i) = userInput.at(5);
                     
                    break;
                    case 'g':
                    encrypWord.at(i) = userInput.at(6);
                     
                    break;
                    case 'h':
                    encrypWord.at(i) = userInput.at(7);
                     
                    break;
                    case 'i':
                    encrypWord.at(i) = userInput.at(8);
                     
                    break;
                    case 'j':
                    encrypWord.at(i) = userInput.at(9);
                     
                    break;
                    case 'k':
                    encrypWord.at(i) = userInput.at(10);
                     
                    break;
                    case 'l':
                    encrypWord.at(i) = userInput.at(11);
                     
                    break;
                    case 'm':
                    encrypWord.at(i) = userInput.at(12);
                     
                    break;
                    case 'n':
                    encrypWord.at(i) = userInput.at(13);
                     
                    break;
                    case 'o':
                    encrypWord.at(i) = userInput.at(14);
                     
                    break;
                    case 'p':
                    encrypWord.at(i) = userInput.at(15);
                     
                    break;
                    case 'q':
                    encrypWord.at(i) = userInput.at(16);
                     
                    break;
                    case 'r':
                    encrypWord.at(i) = userInput.at(17);
                     
                    break;
                    case 's':
                    encrypWord.at(i) = userInput.at(18);
                     
                    break;
                    case 't':
                    encrypWord.at(i) = userInput.at(19);
                     
                    break;
                    case 'u':
                    encrypWord.at(i) = userInput.at(20);
                     
                    break;
                    case 'v':
                    encrypWord.at(i) = userInput.at(21);
                     
                    break;
                    case 'w':
                    encrypWord.at(i) = userInput.at(22);
                     
                    break;
                    case 'x':
                    encrypWord.at(i) = userInput.at(23);
                     
                    break;
                    case 'y':
                    encrypWord.at(i) = userInput.at(24);
                     
                    break;
                    case 'z':
                    encrypWord.at(i) = userInput.at(25);
                     
                    break;
                    default:
                    cout << "Error: encryption cannot be performed." << endl;
                    break;
                    
                }
                
            }
            cout << "Encrypted word: "<< encrypWord << endl << endl ;
            
        }
        // translation map is illegal
        else
        {
            cout << "Error: invalid translation map size. "<< endl << endl;
            
        }
    }
    
    
        
        
        
    
        
    
    else if (method == "decryption")
    {
        cout << "What is the translation map (type 'default' to use default): ";
        cin >> userInput; // translation map
        cout << endl << endl;
        // translation map as default
        if (userInput == "default")
        {
            cout << "What is the single word to translate: ";
            cin >> decrypWord; // single word need to be decrypted
            cout << endl << endl;
            bool upperLetter = false;
            for ( int i=0; i< decrypWord.size() ; ++i )
            {
                if ((decrypWord.at (i) >= 'a') && (decrypWord.at (i) <='z'))
                {
                    if(decrypWord.at (i) == 'z')
                    decrypWord.at(i) = transMap.at (25);
                    else if (decrypWord.at (i) == 'y')
                    decrypWord.at(i) = transMap.at (24);
                    else if (decrypWord.at (i) == 'x')
                    decrypWord.at(i) = transMap.at (23);
                    else if (decrypWord.at (i) == 'w')
                    decrypWord.at(i) = transMap.at (22);
                    else if (decrypWord.at (i) == 'v')
                    decrypWord.at(i) = transMap.at (21);
                    else if (decrypWord.at (i) == 'u')
                    decrypWord.at(i) = transMap.at (20);
                    else if (decrypWord.at (i) == 't')
                    decrypWord.at(i) = transMap.at (19);
                    else if (decrypWord.at (i) == 's')
                    decrypWord.at(i) = transMap.at (18);
                    else if (decrypWord.at (i) == 'r')
                    decrypWord.at(i) = transMap.at (17);
                    else if (decrypWord.at (i) == 'q')
                    decrypWord.at(i) = transMap.at (16);
                    else if (decrypWord.at (i) == 'p')
                    decrypWord.at(i) = transMap.at (15);
                    else if (decrypWord.at (i) == 'o')
                    decrypWord.at(i) = transMap.at (14);
                    else if (decrypWord.at (i) == 'n')
                    decrypWord.at(i) = transMap.at (13);
                    else if (decrypWord.at (i) == 'm')
                    decrypWord.at(i) = transMap.at (12);
                    else if (decrypWord.at (i) == 'l')
                    decrypWord.at(i) = transMap.at (11);
                    else if (decrypWord.at (i) == 'k')
                    decrypWord.at(i) = transMap.at (10);
                    else if (decrypWord.at (i) == 'j')
                    decrypWord.at(i) = transMap.at (9);
                    else if (decrypWord.at (i) == 'i')
                    decrypWord.at(i) = transMap.at (8);
                    else if (decrypWord.at (i) == 'h')
                    decrypWord.at(i) = transMap.at (7);
                    else if (decrypWord.at (i) == 'g')
                    decrypWord.at(i) = transMap.at (6);
                    else if (decrypWord.at (i) == 'f')
                    decrypWord.at(i) = transMap.at (5);
                    else if (decrypWord.at (i) == 'e')
                    decrypWord.at(i) = transMap.at (4);
                    else if (decrypWord.at (i) == 'd')
                    decrypWord.at(i) = transMap.at (3);
                    else if (decrypWord.at (i) == 'c')
                    decrypWord.at(i) = transMap.at (2);
                    else if (decrypWord.at (i) == 'b')
                    decrypWord.at(i) = transMap.at (1);
                    else if (decrypWord.at (i) == 'a')
                    decrypWord.at(i) = transMap.at (0);
                }
                else if ((decrypWord.at (i) < 'a') || (decrypWord.at (i) >'z'))
                {
                    upperLetter = true;
                }
                
                
            }
            if (!upperLetter)
            {
                cout << "Decrypted word: "<< decrypWord << endl << endl;
            }
            
            else 
            {
                cout <<"Error: decryption cannot be performed."<<endl<<endl;
            }
            
        }
        
        else if (userInput.size() == 26)
        {
            cout << "What is the single word to translate: ";
            cin >> decrypWord;
            cout << endl << endl;
            bool notFindLetter = false;
            for ( int i=0; i< decrypWord.size(); ++i )
            {
                char letter ='a';
                letter = decrypWord.at (i);
                if (userInput. find (letter) != string::npos)
                {
                    int posChar =0;
                    posChar =userInput. find (decrypWord.at (i)) + 1 ;
                    if (posChar ==1)
                    decrypWord.at (i) ='a';
                    else if (posChar ==2)
                    decrypWord.at (i) = 'b';
                    else if (posChar ==3)
                    decrypWord.at (i) = 'c';
                    else if (posChar ==4)
                    decrypWord.at (i) = 'd';
                    else if (posChar ==5)
                    decrypWord.at (i) = 'e';
                    else if (posChar ==6)
                    decrypWord.at (i) = 'f';
                    else if (posChar ==7)
                    decrypWord.at (i) = 'g';
                    else if (posChar ==8)
                    decrypWord.at (i) = 'h';
                    else if (posChar ==9)
                    decrypWord.at (i) = 'i';
                    else if (posChar ==10)
                    decrypWord.at (i) = 'j';
                    else if (posChar ==11)
                    decrypWord.at (i) = 'k';
                    else if (posChar ==12)
                    decrypWord.at (i) = 'l';
                    else if (posChar ==13)
                    decrypWord.at (i) = 'm';
                    else if (posChar ==14)
                    decrypWord.at (i) = 'n';
                    else if (posChar ==15)
                    decrypWord.at (i) = 'o';
                    else if (posChar ==16)
                    decrypWord.at (i) = 'p';
                    else if (posChar ==17)
                    decrypWord.at (i) = 'q';
                    else if (posChar ==18)
                    decrypWord.at (i) = 'r';
                    else if (posChar ==19)
                    decrypWord.at (i) = 's';
                    else if (posChar ==20)
                    decrypWord.at (i) = 't';
                    else if (posChar ==21)
                    decrypWord.at (i) = 'u';
                    else if (posChar ==22)
                    decrypWord.at (i) = 'v';
                    else if (posChar ==23)
                    decrypWord.at (i) = 'w';
                    else if (posChar ==24)
                    decrypWord.at (i) = 'x';
                    else if (posChar ==25)
                    decrypWord.at (i) = 'y';
                    else if (posChar ==26)
                    decrypWord.at (i) = 'z';
                }
                else if (userInput.find (letter) == string::npos)
                {
                    notFindLetter = true;
                    
                }
            }
            if (notFindLetter)
            {
                cout <<"Error: decryption cannot be performed." << endl << endl;
                
            }
           
            else if(!notFindLetter)
            {
                cout << "Decrypted word: "<< decrypWord << endl << endl ;
                
            }
       
            
                    
                 
                 
                 
                    
                    
                
               
                
            
            
            
        }
        else if (userInput.size() != 26)
        {
            cout << "Error: invalid translation map size. " << endl << endl;
            
        }
        //invalid method choice.
    }
    else
    {
        cout <<"Error: invalid method choice." << endl << endl;
        
    }

        
        
    

    
    
        
      
        
    
        

    


    

    
    
    return 0;
}

