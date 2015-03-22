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
        int beginning, ending;
        int i;
       
        
        
        cout << "Enter beginning and ending numbers, separated by space: ";
        cin >> beginning >> ending;
        cout << endl;
        
        //sequence 1 : increment by 1
        
        for ( i= beginning; i <= ending; ++i)
        {
           
            cout << i << ',' << ' ';
            
        }
        cout <<'\b'<<'\b' <<" " << endl << endl;
        
        // sequence 2: increment by 2
        cout << "Enter beginning and ending numbers, separated by space:";
        cin >> beginning >> ending;
        cout << endl;
        for ( i= beginning; i <= ending ; i += 2)
        {
           
            cout << i << ',' << ' ';
            
        }
        cout <<'\b'<<'\b' <<" " << endl << endl;
        
        // sequence : multiplize by (-2)
        cout << "Enter the beginning and largest positive numbers, separated";
        cout << "by space:";
        cin >> beginning >> ending;
        cout << endl;
        for ( i= beginning; i <= ending ; i = (-2)*i)
        {
            
            cout << i <<',' << ' ';
        }
        cout <<'\b'<<'\b' <<" " <<endl << endl;
         
    }
    if (2 == ex)
    {
        //All exercide 2 code
        int i; // number of input
        int As = 0, Bs = 0, Cs = 0, Ds = 0, Fs = 0;
        cout << "Enter one or more grades, or -1 to stop:" << endl;
        do 
        {
            cin >> i;
            
            if (i >= 90 && i <= 100)
            {
                ++As;
                
            }
            
            
            if (i >= 80 && i <= 89)
            {
                ++Bs;
                
            }
            
            if (i >= 70 && i <= 79)
            {
                ++Cs;
                
            }
            
            if (i >= 60 && i <= 69)
            {
                ++Ds;
                
            }
            
            if (i >= 0 && i <= 59)
            {
                ++Fs;
                
            } 
           
        }
        while (i != -1);
        if (i==-1)
        {
            cout <<"The grades breakdown is:" << endl;
            cout <<"As: " << As << endl;
            cout <<"Bs: " << Bs << endl;
            cout <<"Cs: " << Cs << endl;
            cout <<"Ds: " << Ds << endl;
            cout <<"Fs: " << Fs << endl;
        }
         
    }
    
    
    
    return 0;

}