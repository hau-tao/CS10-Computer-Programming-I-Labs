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
// get random integer number from 1 to 6

int genRandInt ()
{
    int randomNum;
    randomNum = rand () % 6 + 1; 
    return randomNum;
}


int singleTurn ()
{
    srand(333);
    
    int currentScore = 0;
   
    int currentRoll  =0;
    int holdValue = 0;
    int turnSimulation = 0;
    int countZero      = 0; // count number of zero
    int countHoldValue =0;
    double ProbZero = 0.0; // probabily of zero
    // probability of holdvalue to holvalue +5
    double ProbHoldValue =0.0000000, Prob1  =0.0000000, Prob2=0.0000000; 
    double Prob3  =0.0000000, Prob4  =0.0000000, Prob5 =0.0000000;
    // variable to count each number in 6 possible outcomes
    int  count1 = 0, count2 = 0;
    int count3 = 0, count4 = 0, count5 = 0;
  
    //get the hold Value from user
    cout << "What value should we hold at? ";
    cin  >> holdValue;
    cout << endl << endl;
    
     //get the number of turn simulation from user
    cout << "Hold-at-N turn simulations? ";
    cin  >> turnSimulation;
    cout << endl << endl;
    
    // prinout score and probability
    cout << "Score\tEstimated Probability\n";
    
    
    // repeat the simulation
    
    int i =1;
    
    
    while ( i <= turnSimulation)
    {
        while (currentScore < holdValue && currentScore >=0  )
        {
            
            currentRoll = genRandInt (); 
            currentScore += currentRoll; 
              if (currentRoll == 1 ) 
            {
                currentScore = -1;
                ++ countZero;
            }
          
        } 
         
            if ( currentScore == holdValue)
            {
                ++countHoldValue ;
            }
            else if (currentScore  == holdValue + 1)
            {
                ++count1 ;  
            }
            else if ( currentScore  == holdValue + 2)
            {
               ++ count2 ;
            }
            else if (currentScore == holdValue + 3)
            {
                ++count3 ;
            }
            else if (currentScore == holdValue + 4)
            {
                ++count4 ;
            }
            else if (currentScore  == holdValue + 5)
            {
                ++count5 ;
            }
            currentScore = genRandInt (); 
           
        ++i;
     
    }
   
    
    
    ProbZero = static_cast <double> (countZero) / turnSimulation;
   
    Prob1   = static_cast <double> (count1) / turnSimulation;
    Prob2   = static_cast <double> (count2) / turnSimulation;
    Prob3   = static_cast <double> (count3) / turnSimulation;
    Prob4   = static_cast <double> (count4) / turnSimulation;
    Prob5   = static_cast <double> (count5) / turnSimulation;
    ProbHoldValue = static_cast <double> (countHoldValue) / turnSimulation; ;
     
    
 
      
   
    
    cout << "0    \t" << fixed << showpoint << ProbZero << endl;
    cout << holdValue << "   \t" << fixed << showpoint << ProbHoldValue << endl;
    cout << holdValue +1 << "   \t"<< fixed << showpoint << Prob1 << endl;
    cout << holdValue +2 << "   \t"<< fixed << showpoint << Prob2 << endl;
    cout << holdValue +3 << "   \t"<< fixed << showpoint << Prob3 << endl;
    cout << holdValue +4 << "   \t"<< fixed<< showpoint << Prob4 << endl;
    cout << holdValue +5 << "   \t"<< fixed << showpoint << Prob5 << endl;

    
    
  //  ProbNum = static_cast <double>  (countNum) / turnSimulation;  
  //  cout <<" probability of number is  " << setprecision (6) << ProbNum << endl;
    
    
    return currentScore;
} 





int main () 
{ 
    
   
     
    singleTurn();
    
   
    
    return 0;
    
    
    
}

    

