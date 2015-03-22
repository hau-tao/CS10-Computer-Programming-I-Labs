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
    
    string userInput = "abcde";
    string transMap = "zyxwvutsrqponmlkjihgfedcba";
    string encrypWord = "aaaaaaa";
    
    cout << "What is the translation map (type 'default' to use default): ";
    cin >> userInput;
    cout << endl;
    
    // check userinput is default
    
    if (userInput == "default") 
    {
        cout << "What is the single word to translate: ";
        cin >> encrypWord;
        cout <<endl;
        switch (encrypWord.at(0))
        {
            case 'a':
            encrypWord.at(0) = transMap.at(0);
            cout << "Encrypted word: "<< encrypWord << endl ;
            break;
            case 'b':
            encrypWord.at(0) = transMap.at(1);
            cout << "Encrypted word: "<< encrypWord << endl ;
            break;
            case 'c':
            encrypWord.at(0) = transMap.at(2);
            cout << "Encrypted word: "<< encrypWord << endl ;
            break;
            case 'd':
            encrypWord.at(0) = transMap.at(3);
            cout << "Encrypted word: "<< encrypWord << endl ;
            break;
            case 'e':
            encrypWord.at(0) = transMap.at(4);
            cout << "Encrypted word: "<< encrypWord << endl ;
            break;
            case 'f':
            encrypWord.at(0) = transMap.at(5);
            cout << "Encrypted word: "<< encrypWord << endl ;
            break;
            case 'g':
            encrypWord.at(0) = transMap.at(6);
            cout << "Encrypted word: "<< encrypWord << endl ;
            break;
            case 'h':
            encrypWord.at(0) = transMap.at(7);
            cout << "Encrypted word: "<< encrypWord << endl ;
            break;
            case 'i':
            encrypWord.at(0) = transMap.at(8);
            cout << "Encrypted word: "<< encrypWord << endl ;
            break;
            case 'j':
            encrypWord.at(0) = transMap.at(9);
            cout << "Encrypted word: "<< encrypWord << endl ;
            break;
            case 'k':
            encrypWord.at(0) = transMap.at(10);
            cout << "Encrypted word: "<< encrypWord << endl ;
            break;
            case 'l':
            encrypWord.at(0) = transMap.at(11);
            cout << "Encrypted word: "<< encrypWord << endl ;
            break;
            case 'm':
            encrypWord.at(0) = transMap.at(12);
            cout << "Encrypted word: "<< encrypWord << endl ;
            break;
            case 'n':
            encrypWord.at(0) = transMap.at(13);
            cout << "Encrypted word: "<< encrypWord << endl ;
            break;
            case 'o':
            encrypWord.at(0) = transMap.at(14);
            cout << "Encrypted word: "<< encrypWord << endl ;
            break;
            case 'p':
            encrypWord.at(0) = transMap.at(15);
            cout << "Encrypted word: "<< encrypWord << endl ;
            break;
            case 'q':
            encrypWord.at(0) = transMap.at(16);
            cout << "Encrypted word: "<< encrypWord << endl ;
            break;
            case 'r':
            encrypWord.at(0) = transMap.at(17);
            cout << "Encrypted word: "<< encrypWord << endl ;
            break;
            case 's':
            encrypWord.at(0) = transMap.at(18);
            cout << "Encrypted word: "<< encrypWord << endl ;
            break;
            case 't':
            encrypWord.at(0) = transMap.at(19);
            cout << "Encrypted word: "<< encrypWord << endl ;
            break;
            case 'u':
            encrypWord.at(0) = transMap.at(20);
            cout << "Encrypted word: "<< encrypWord << endl ;
            break;
            case 'v':
            encrypWord.at(0) = transMap.at(21);
            cout << "Encrypted word: "<< encrypWord << endl ;
            break;
            case 'w':
            encrypWord.at(0) = transMap.at(22);
            cout << "Encrypted word: "<< encrypWord << endl ;
            break;
            case 'x':
            encrypWord.at(0) = transMap.at(23);
            cout << "Encrypted word: "<< encrypWord << endl ;
            break;
            case 'y':
            encrypWord.at(0) = transMap.at(24);
            cout << "Encrypted word: "<< encrypWord << endl ;
            break;
            case 'z':
            encrypWord.at(0) = transMap.at(25);
            cout << "Encrypted word: "<< encrypWord << endl ;
            break;
            default:
            cout << "Error: encryption cannot be performed." << endl;
            break;

        }    
        
           
        
        
    }
    
    // check the size of translation map
    else if (userInput.size() == 26)
    {
        cout << "What is the single word to translate: ";
        cin >> encrypWord;
        cout <<endl;
        // encrypt word
        switch (encrypWord.at(0))
        {
            case 'a':
            encrypWord.at(0) = userInput.at(0);
            cout << "Encrypted word: "<< encrypWord << endl ;
            break;
            case 'b':
            encrypWord.at(0) = userInput.at(1);
            cout << "Encrypted word: "<< encrypWord << endl ;
            break;
            case 'c':
            encrypWord.at(0) = userInput.at(2);
            cout << "Encrypted word: "<< encrypWord << endl ;
            break;
            case 'd':
            encrypWord.at(0) = userInput.at(3);
            cout << "Encrypted word: "<< encrypWord << endl ;
            break;
            case 'e':
            encrypWord.at(0) = userInput.at(4);
            cout << "Encrypted word: "<< encrypWord << endl ;
            break;
            case 'f':
            encrypWord.at(0) = userInput.at(5);
            cout << "Encrypted word: "<< encrypWord << endl ;
            break;
            case 'g':
            encrypWord.at(0) = userInput.at(6);
            cout << "Encrypted word: "<< encrypWord << endl ;
            break;
            case 'h':
            encrypWord.at(0) = userInput.at(7);
            cout << "Encrypted word: "<< encrypWord << endl ;
            break;
            case 'i':
            encrypWord.at(0) = userInput.at(8);
            cout << "Encrypted word: "<< encrypWord << endl ;
            break;
            case 'j':
            encrypWord.at(0) = userInput.at(9);
            cout << "Encrypted word: "<< encrypWord << endl ;
            break;
            case 'k':
            encrypWord.at(0) = userInput.at(10);
            cout << "Encrypted word: "<< encrypWord << endl ;
            break;
            case 'l':
            encrypWord.at(0) = userInput.at(11);
            cout << "Encrypted word: "<< encrypWord << endl ;
            break;
            case 'm':
            encrypWord.at(0) = userInput.at(12);
            cout << "Encrypted word: "<< encrypWord << endl ;
            break;
            case 'n':
            encrypWord.at(0) = userInput.at(13);
            cout << "Encrypted word: "<< encrypWord << endl ;
            break;
            case 'o':
            encrypWord.at(0) = userInput.at(14);
            cout << "Encrypted word: "<< encrypWord << endl ;
            break;
            case 'p':
            encrypWord.at(0) = userInput.at(15);
            cout << "Encrypted word: "<< encrypWord << endl ;
            break;
            case 'q':
            encrypWord.at(0) = transMap.at(16);
            cout << "Encrypted word: "<< encrypWord << endl ;
            break;
            case 'r':
            encrypWord.at(0) = userInput.at(17);
            cout << "Encrypted word: "<< encrypWord << endl ;
            break;
            case 's':
            encrypWord.at(0) = userInput.at(18);
            cout << "Encrypted word: "<< encrypWord << endl ;
            break;
            case 't':
            encrypWord.at(0) = userInput.at(19);
            cout << "Encrypted word: "<< encrypWord << endl ;
            break;
            case 'u':
            encrypWord.at(0) = userInput.at(20);
            cout << "Encrypted word: "<< encrypWord << endl ;
            break;
            case 'v':
            encrypWord.at(0) = userInput.at(21);
            cout << "Encrypted word: "<< encrypWord << endl ;
            break;
            case 'w':
            encrypWord.at(0) = userInput.at(22);
            cout << "Encrypted word: "<< encrypWord << endl ;
            break;
            case 'x':
            encrypWord.at(0) = userInput.at(23);
            cout << "Encrypted word: "<< encrypWord << endl ;
            break;
            case 'y':
            encrypWord.at(0) = userInput.at(24);
            cout << "Encrypted word: "<< encrypWord << endl ;
            break;
            case 'z':
            encrypWord.at(0) = userInput.at(25);
            cout << "Encrypted word: "<< encrypWord << endl ;
            break;
            default:
            cout << "Error: encryption cannot be performed." << endl;
            break;

        }    
        
        
    }
    
    // translation map is illegal
    
    else
    {
        cout <<"Error: invalid translation map size. "<< endl;
    }
    
    
    
    return 0;
}