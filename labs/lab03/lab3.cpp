//  =============== BEGIN ASSESSMENT HEADER ================
/// @file lab3.cpp
/// @brief Lab 3
///
/// @author hau_tao_1 [taoquanghau@gmail.com]
/// @date July 1, 2014
//  ================== END ASSESSMENT HEADER ===============


#include <iostream>

using namespace std; 

int main()

{
    int ex;
    cout << "Which exercise? ";
    cin >> ex;
    cout << endl;
    if ( ex == 1 )
    {
        // All Exercise 1 code
        int firstInteger   = 0;
        int secondInteger  = 0;
        int multiplication = 0;
        int addition       = 0;
        int division       = 0;
        int remainder      = 0;
        
        cout << "Enter the first integer: ";   // input 1st Integer
        cin >> firstInteger;
        
        cout << "Enter the second integer: "; // input 2nd integer
        cin >> secondInteger;
        cout <<endl;
        
        //Addition
        addition = firstInteger + secondInteger;
        cout << firstInteger << " + " << secondInteger << " = " << addition;
        cout <<endl;
        
        // Multiplication
        multiplication = firstInteger * secondInteger;
        cout << firstInteger << " * " << secondInteger << " = ";
        cout << multiplication;
        cout << endl;
        
        //division
        division = firstInteger / secondInteger;
        cout << firstInteger << " / " << secondInteger << " = " << division;
        cout << endl;
        //remainder
        remainder = firstInteger % secondInteger;
        cout << firstInteger << " % " << secondInteger << " = " << remainder;
        cout << endl;
    }
        
        else if ( ex == 2 )
        {
            
        double purchaseAmount = 0.0;
        double amountReceived = 0.0;
        double changeValue    = 0.0;
        int    numPennies     = 0;
        int    dollars        = 0;
        int    temp1          = 0; //store remained pennies converting $
        int    temp2          = 0; //store remained pennies converting Quar
        int    temp3          = 0; //store remained pennies converting dim
            
        cout << "Enter purchase amount: "; // input purchase amount
        cin >> purchaseAmount;
        cout << endl << endl;
            
        cout << "Enter amount Received: "; // input amount received
        cin >> amountReceived;
        cout << endl << endl;
            
        //change Value and convert it to pennies
        changeValue = (amountReceived - purchaseAmount);
        cout << "Total Change: $" << changeValue << endl;
        cout <<endl;
        // convert change Value to pennies
            numPennies = static_cast<int>(changeValue *100 + 0.5);
            
            // dollars
            dollars = numPennies / 100;
        cout <<"dollars " << dollars <<endl;
            
            //quarters
            temp1 = numPennies % 100;
        cout << "quarters " << temp1 / 25 <<endl;
            
            //dimes 
            temp2 = temp1 % 25;
        cout << "dimes " << temp2 /10 <<endl;
            
            //nickels
            temp3 = temp2 % 10;
        cout << "nickels " << temp3 / 5 <<endl;
            
            //pennies
            numPennies = temp3 % 5;
        cout << "pennies " << numPennies / 1 <<endl;
    }
            
        return 0;
}