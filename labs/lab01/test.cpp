//  =============== BEGIN ASSESSMENT HEADER ================
/// @file lab1.cpp
/// @brief Lab 1
///
/// @author hau_tao_1 [taoquanghau@gmail.com]
/// @date June 24, 2014
//  ================== END ASSESSMENT HEADER ===============
#include <iostream>
using namespace std;

int main() { 
    int userAge = 0;
    cin >> userAge;
   if ( userAge <  18 ) {
      cout << "18 or less" << endl;
   }
   if (userAge == 18){
    cout << "18 or less" << endl;
   }
   else {
     cout << "Over 18" << endl;
   }

   return 0;
}    