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
#include <cstdlib>     // Enables use of rand()
#include <ctime>       // Enables use of time()
#include <string>
#include <iomanip>
using namespace std;
int genRandInt ()
{
    int randomNum;
    randomNum = rand () % 6 + 1; 
    return randomNum;
}


int main () 
{ 
    int i =1;
    int turnSimulation=0;
    int nextRoll =0;
    int currentScore =0;
    int holdValue =0;
    int countZero =0;
    
    
    while ( i <= turnSimulation)
    {
        while (currentScore < holdValue  )
        {
            
            nextRoll = genRandInt ();
            currentScore += nextRoll ;
            
            if (nextRoll == 1) 
            {
                currentScore = 0;
                ++ countZero;
            }
    
        }
        cout <<" currenscore is " << currentScore << " \n";
           currentScore =  genRandInt ();
        ++i;
    }
    
     
    
    
    return 0;
    
    
    
}

    

