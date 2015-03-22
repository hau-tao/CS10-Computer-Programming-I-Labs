//  =============== BEGIN ASSESSMENT HEADER ================
/// @file  boardGame
/// @brief assignment07/boardGame
///
/// @author hau_tao_1 [taoquanghau@gmail.com]
/// @date July 18, 2014
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
#include <vector>
using namespace std;
///rollNDice
///simulates rolling N dice, each of which has the specified number of sides
///parameters: two integers by value:
///first integer: the number of dice to roll, by value
///second integer - the number of sides on the dice, by value
///return type: integer, the summation of all N dice rolls
int rollNDice (int NDice, int NSide);

///mostLandings
///returns the cell on the board with the most "landings", within an inclusive interval
///parameters: a vector<int>; two integers
///first parameter: the game board vector, by const reference
///second parameter: the start of the interval to be tested, by value
///third parameter: the end of the interval to be tested, by value
///return type: integer, the index of the first cell in the interval with the most landings
int mostLandings (const vector<int>& gameBoard , int Start, int End);


int main ()
{
    int numberDice = 2;
    int index;
    int numberSides;
    int numberSpots;
    int numberSimulation;
    int Accumulation;
    int Starting ;
    int Ending ;
    srand(333);
    cout << "How many sides of the board are there? ";
    cin  >> numberSides;
    cout << endl;
    cout << "How many spots are on each side? ";
    cin  >> numberSpots;
    cout << endl;
    cout << "How many simulations? " ;
    cin  >> numberSimulation;
    vector<int> Board (numberSpots * numberSides);
    vector<int> count (numberSpots * numberSides, 0);
    
    /// calculate the accumulation;
    
    int i = 1;
    int j = 1;
    
    
    while (i<= numberSimulation)
    {
        Accumulation = rollNDice (numberDice, numberSides);
        Board.at (Accumulation - 1) = Accumulation -1;
        ++count.at(Accumulation - 1) ; 
        
        while (Accumulation <= numberSides * numberSpots )
        {
            Accumulation += rollNDice (numberDice, numberSides);
            if (Accumulation >= numberSides * numberSpots )
            {
                break;
                
            }
            
            Board.at (Accumulation - 1) = Accumulation -1;
            ++ count.at (Accumulation - 1);
           
            
        }
        Accumulation = 0;
     
        ++i;
        
    }
    for ( int i =0; i< Board.size(); ++i)
        {
            cout << Board.at (i) << ' ';
            cout << count.at (i) << endl;
           
        }
    while ( j <= numberSides)
    {
        Starting = numberSpots * j - numberSpots;
        Ending   = numberSpots *j - 1;
        
        index = mostLandings (count, Starting, Ending);
        
       
        cout <<"On side " << j <<','<< " spot " << index << " has the most landings: " << count.at (index -1) << endl;
            
        ++j;
    } 
    
   
    
    
 

   
  
    
   
    
    return 0;
}
int rollNDice (int NDice, int NSide)
{
    
    int sumDice =0;
    int randVal; 
    sumDice = rand() % 6 +1;
    
    for (int i =1 ; i < NDice ; ++i)
    {
        randVal =  rand() % 6 +1;
        sumDice += randVal;
    }
    
    return sumDice;
}


int mostLandings (const vector<int>& countNum ,  int Start, int End)
{
    int index;
    int i = Start;
    int mostNum =0;
    while ( i <= End )
    {
        if (countNum.at (i) > mostNum)
        {
            mostNum = countNum.at (i);
            index = i;
        }
        
        ++i;
    }
   
    return index +1;
    
    
   
}






