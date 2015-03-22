//  =============== BEGIN ASSESSMENT HEADER ================
/// @file lab2.cpp
/// @brief Lab 2
///
/// @author hau_tao_1 [taoquanghau@gmail.com]
/// @date June 26, 2014
//  ================== END ASSESSMENT HEADER ===============

#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string wordName;
    int  numDays = 0;
    //acquire a name through user's input 
    cout << "Good day, what is your name? ";
    getline (cin, wordName);
    cout << endl;
    //ask the user a question about nice days
    cout << "how many nice days would you like, " << wordName <<"? " ;
    cin >> numDays >> numDays;
    cout << endl;
    // double the number of nicedays
    numDays *= 2; 
   
    cout << "Hi, " << wordName << ",";
    cout << " have " << numDays <<" wonderful days!" << endl;
   
   
   
    return 0;
}
            