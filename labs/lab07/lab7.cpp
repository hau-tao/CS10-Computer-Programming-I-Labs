//  =============== BEGIN ASSESSMENT HEADER ================
/// @file lab7.cpp
/// @brief Lab 6
///
/// @author hau_tao_1 [taoquanghau@gmail.com]
/// @date July 10, 2014
//  ================== END ASSESSMENT HEADER ===============
#include <iostream>
#include <cstdlib>     // Enables use of rand()
#include <ctime>       // Enables use of time()
#include <string>

using namespace std;
// get random number function
int genRandInt (int smallestNum, int biggestNum)
{
    
    int randomNum;
    randomNum = (rand () % (biggestNum  - smallestNum +1)) + smallestNum;
    return randomNum;
    
    
}

// random number for coin toss exercise
int coinToss ()
{
    
    int randomNum;
    randomNum = rand () % 2 +1;
    if (randomNum == 1)
    {
        cout << "Flip: heads" << endl;
    }
    else if (randomNum == 2)
    {
        cout << "Flip: tails" << endl;
        
    }
    return randomNum;
    
    
}


int main()
{
    int ex;
    cout << "Which exercise? ";
    cin >> ex;
    cout << endl;
    
    // exercise 1
    if (1==ex)
    {
        int radNum; 
        int num1, num2;
        srand(time(0));
        
        // enter the smallest number
        cout << "Enter the smallest possible number: ";
        cin  >> num1;
        cout << endl;
        
        //enter the  biggest number
        cout << "\nEnter the biggest possible number: ";
        cin >> num2;
        cout << endl << endl;
        
        radNum = genRandInt(num1, num2);// 1st call  getRanInt function
        cout << "Random number: " << radNum << endl; 
        
        radNum = genRandInt(num1, num2); // 2nd call  getRanInt function
        cout << "Random number: " << radNum << endl;
        
        radNum = genRandInt(num1, num2); // 3rd call getRanInt function
        cout << "Random number: " << radNum << endl;
    }
    
    
        
    
    
    //exercise 2
    else if (2==ex)
    {
        srand(time(0));
        
        string userInput = "yes"; // userinput yes or no
        coinToss();
        cout <<"Toss the coin again (yes/no)? ";
        cin >> userInput;        // input by user
        cout << endl;
        while (userInput == "yes" )
        {
            coinToss();
            cout <<"Toss the coin again (yes/no)? ";
            cin >> userInput;
            cout << endl;
        }
      
      
        
    }
    
    
    return 0;
    
}


