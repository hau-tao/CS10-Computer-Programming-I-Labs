//  =============== BEGIN ASSESSMENT HEADER ================
/// @file lab5.cpp
/// @brief Lab 5
///
/// @author hau_tao_1 [taoquanghau@gmail.com]
/// @date July 7, 2014
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
    
    if (1 == ex)
    {
        // All Exercise 1 code
        string wordInput = "abcdef";
        bool letterX = false;
        bool letterE = false;
      
        
       
        cout << "Enter a word: ";
        cin >> wordInput;
        cout << endl;
        // count from index0 to index of number of character
        for ( int i=0; i < wordInput.size (); ++i)
        {
            // check letter 'x'
            if ( wordInput. at (i)== 'x')
            { 
                letterX = true;
                
            }
            // check letter 'e'
            else if (wordInput. at (i) == 'e')
            {
                letterE = true;
            
             
            }
        }
        // out of loop, if dectect letter 'x'
        if (letterX )
        {
            cout << "Your word, " << wordInput 
            << ", contains the character 'x'" << endl;
            
        }
        // out of loop, if detect letter 'e'
        if (letterE)
        {
            cout << "Your word, " << wordInput 
            << ", contains the character 'e'" << endl; 
        }
         
    }
    if (2 == ex)
    {
        //All exercide 2 code
        string userWord = "abcdef";
       
        cout << "Enter a word: ";
        cin >> userWord;
        cout << endl;
        for ( int i=0; i < userWord.size (); ++i)
        
        {
            // check letter 'x'
            if ( userWord. at (i)== 'x')
            { 
                
                userWord. at (i) = '*';
                
            }
            // check letter 'e'
            else if (userWord. at (i) == 'e')
            {
                
                userWord. at (i) = '3';
                
            
             
            }
            //check letter 'i'
            else if (userWord. at (i) == 'i')
            {
                
                userWord. at (i) = '1';
            }
        }
        // out of loop, get tranformed word to the output
        cout << "Your word transformed is " << userWord << endl;
         
    }
    if (3 == ex)
    {
        string userWord = "stop";
        string stop = "stop";
        cout << "Enter a word: ";
       
        bool symbol = false;
        bool str = false;
        
        cin >> userWord;
        cout << endl;
        for ( int i= 0; i < userWord.size (); ++i)
        {
            if (userWord.find('.') != string::npos)
            {
                
                symbol = true;
                
            
                
            }
            
            if (userWord.find("stop") != string::npos)
            {
                
                str = true;
                
                
            
                
            }
            if (userWord.find('.') == string::npos)
            {
                symbol = false;
                
                
                
            }
            
            
            
            if (userWord.find("stop") == string::npos)
            {
                str = false;
               
                
            }
            
        }
        if (symbol)
        {
            cout << "The character '.' is located at index " 
            << userWord.find('.') << endl;
        
            
        }
        if (!symbol )
        {
            cout << "The entry does not contain the character '.'" << endl;
            
        }
        if (str)
        {
            cout << "The word \"" << stop <<"\"" <<" starts at index " 
            << userWord.find ("stop") << endl;
            
        }
      
     
        
        if (!str )
        {
            cout << "The entry does not contain the word \"" << stop
            << "\"" << endl;
                
            
        } 
        
      
        
        
        
    }
    
    
    return 0;

}