//  =============== BEGIN ASSESSMENT HEADER ================
/// @file cipher.cpp
/// @brief assignment03/cipher
///
/// @author hau_tao_1 [taoquanghau@gmail.com]
/// @date July 14, 2014
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
#include <cmath>

using namespace std;

//decalre global variables;
const int OK = 0;
const int DIV_ZERO = 1;
const int SQRT_ERR = 2;


// definition for helper function

int acquireOperands(const string &op, double &x, double &y, double &z);
int division(double a, double b, double &result);
int quadratic(double a, double b, double c, double &root1, double &root2);
int pythagorean(double a, double b, double &c);

    



// definition of acquireOperands function
int acquireOperands(const string &op, double &x, double &y, double &z)
{
    /// division operand
    if (op == "division")
    {
        cout << "Enter your first number: " ;
        cin  >> x;
        cout << endl;
        cout << "Enter your second number: ";
        cin  >> y;
        cout << endl;
        return 2;
        
    }
    
    /// function of Pythagorean equation
    else if (op == "pythagorean")
    {
        cout << "Enter your first number: " ;
        cin  >> x;
        cout << endl;
        cout << "Enter your second number: ";;
        cin  >> y;
        cout << endl;
        return 2;
    }
    
    /// quaratic function
    else if (op == "quadratic")
    {
        cout << "Enter your first number: " ;
        cin  >> x;
        cout << endl;
        cout << "Enter your second number: ";
        cin  >> y;
        cout << endl;
        cout << "Enter your third number: ";
        cin  >> z;
        cout << endl;
        return 3;
        
    }
    
    else
    {
        cout << "Error: Operation not supported.";
    }
    return -1 ;
}

// definition of division
int division(double a, double b, double &result)
{
    
    
    if (static_cast <int> (b) == 0 )
    {
        
        return  DIV_ZERO;
    }
    
    else
    {
        result = a / b;
        return OK;
        
    }
    return -1;
}

// definition of pythgorean equation

int pythagorean(double a, double b, double &c)
{
    
    c = sqrt (a * a + b * b);
    return OK;
}

int quadratic(double a, double b, double c, double &root1, double &root2)
{
    double  Discriminant;
   
  
    Discriminant = pow(b, 2) - 4 * a * c;
    if (static_cast <int>(Discriminant) < 0)
    {
        return SQRT_ERR;
    }
    if (static_cast <int>(Discriminant) >= 0 && static_cast <int>(a)!= 0)
    {
        root1 = (-b + sqrt(Discriminant)) / (2 * a);
        root2 = (-b - sqrt(Discriminant)) / (2 * a);
        
        return OK;
        
    }
    if (static_cast <int>(a)==0)
    {
       
        return  DIV_ZERO;
        
    }
    return -1;
}


int main ()
{
    string oper = " ";
    double resultDivision = 0.0;
    double resultPythagorean = 0.0;
    double rootNum1, rootNum2 ;
    int returnValue;
    
    double num1, num2, num3; // for 
    cout << "Please choose an operation: ";
    cin >> oper;
    cout << endl;
    
    while (oper != "division" && oper!= "pythagorean" && oper != "quadratic")
    {
        cout << "Error: Operation not supported." << endl;
        cout << "Please choose an operation: ";
        cin >> oper;
        cout << endl;
        
    }
    acquireOperands( oper, num1, num2, num3);
    if (oper == "division")
    {
        cout << "Equation: " << num1 << " / " <<  num2 << endl;
        returnValue = division(num1, num2, resultDivision );
        
        /// check returnvalue in division fucntion
        if (returnValue == 0)
        {
            cout << "Result: " << resultDivision << endl;
            
        }
        else if (returnValue == 1)
        {
            cout << "Error: Cannot divide by zero." << endl;
        
        }
        
    }
    else if (oper == "pythagorean")
    {
        cout <<"Equation: " <<"sqrt(" << num1; 
        cout << "^2 + " << num2 << "^2)" << endl;
        returnValue = pythagorean(num1, num2, resultPythagorean);
        
        if (returnValue ==0)
        {
            cout <<"Result: " << resultPythagorean << endl; 
            
            
        } 
        
    }
    else if (oper == "quadratic")
    {
        cout <<"Equation: "<< num1 <<"x^2 + " ;
        cout << num2 << "x + " << num3 << " = 0" << endl;
        returnValue = quadratic(num1, num2, num3, rootNum1, rootNum2);
        if (returnValue == 0 )
        {
            if (static_cast<int>(rootNum1) < static_cast<int>(rootNum2))
            {
                cout << "Result: " << rootNum1 <<", "<< rootNum2 << endl; 
                
            }
            else if (static_cast<int>(rootNum1) > static_cast<int>(rootNum2))
            {
                cout << "Result: " << rootNum2 <<", "<< rootNum1 << endl; 
                
            }
           
            else
            {
                cout << "Result: " << rootNum1 << endl;
               
            }
   
        }
        else if (returnValue == 2)
        {
            cout << "Error: Cannot take square root of a negative number.";
           
            
        }
        else if (returnValue == 1)
        {
            cout << "Error: Cannot divide by zero.";
           
            
        }
        
    }
    return 0;
}