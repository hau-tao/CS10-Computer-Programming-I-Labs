#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word = "euclician";
    
    int count = 0;
    char letter;
    
    
    for ( int i=0; i<= word.size() - 1 ; ++i)
    {
        
      //  cout << word.at (i);
      
        letter = word.at (i);
        if (letter >= 'a' && letter <= 'l')
        {
         count = count + 1;  
         
        }
       
        
    }
    /* cout << "\nIn the word \"" << word << "\" there are"
     << count  << " leters from a to 1 inclusive. " << endl;
     // find the subword "lid" inside word:
     cout << "\nthe word \"lid\" occurrs at offset"
     << word. find ("lid") << " in the word "\" << word << "\"" << endl; */
     
     //find returns npos if not found....
     if (word.find ('x') == string::npos)
     {
         cout << "'x' was not found!" << endl;
     }
     if (word.find ('x')!= string ::npos)
     {
         cout << "'x' was found" << endl;
     }
    
    return 0;
}

    