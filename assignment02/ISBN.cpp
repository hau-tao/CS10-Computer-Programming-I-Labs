//  =============== BEGIN ASSESSMENT HEADER ================
/// @file ISBN.cpp
/// @brief assignment02/ISBN
///
/// @author hau_tao_1 [taoquanghau@gmail.com]
/// @date June 30, 2014
///
/// @par Plagiarism Section
/// I hereby certify that I have not received assistance on this assignment,
/// or used code, from ANY outside source other than the instruction team.
//  ================== END ASSESSMENT HEADER ===============
#include <iostream>


using namespace std;

int main() 
{
    int ISBN            = 0;
    int num1            = 0;
    int num2            = 0;
    int num3            = 0;
    int num4            = 0;
    int num5            = 0;
    int num6            = 0;
    int num7            = 0;
    int num8            = 0;
    int num9            = 0;
    int remain1 = 0, remain2 = 0, remain3 = 0, remain4 = 0, remain5 = 0;
    int remain6 = 0, remain7 = 0, remain8 = 0;
    int weightedSum     = 0;
    int checkSum        = 0;
    // input the first 9 digits
    cout << "Please enter the first 9 digits of the ISBN: ";
    cin >> ISBN;
    cout << endl << endl;
    //isolation each digit
    num1    = ISBN / 100000000; //isolate 1st num
    remain1 = ISBN % 100000000;
    
    num2    = remain1 / 10000000; // isolate 2nd num
    remain2 = remain1 % 10000000;
    
    num3    = remain2 / 1000000; //isolate 3rd num
    remain3 = remain2 % 1000000;
    
    num4    = remain3 / 100000; //isolate 4th num
    remain4 = remain3 % 100000;
    
    num5    = remain4 / 10000; //isolate 5th num
    remain5 = remain4 % 10000;
    
    num6    = remain5 / 1000; //isolate 6th num
    remain6 = remain5 % 1000;
    
    num7    = remain6 / 100; //isolate 7th num
    remain7 = remain6 % 100;
    
    num8    = remain7 / 10; //isolate 8th num
    remain8 = remain7 % 10;
    
    num9    = remain8 / 1; //isolate 9th num
    
    
    
    
    
    //calculate checksum
    weightedSum = num1 + 2 * num2 + 3 * num3 + 4 * num4 + 5 * num5 
                + 6 * num6 + 7 * num7 + 8 * num8 + 9 * num9;
                
    
    checkSum = weightedSum % 11;
    
    cout << "Checksum " << checkSum << endl;
                
                
    
    return 0;
}