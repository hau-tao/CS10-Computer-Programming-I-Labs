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
int division(double a, double b, double &result) ;
int pythagorean(double a, double b, double &c);
int quadratic(double a, double b, double c, double &root1, double &root2);

int acquireOperands(const string &op, double &x, double &y, double &z)
{
    int returnValue = 0;
    double resultDivision = 0.0;
    double resultPythagorean = 0.0;
    double rootNum1, rootNum2 ;
    
    // function of division
    if (op == "division")
    {
        cout << "Enter your first number: " ;
        cin  >> x;
        cout << endl;
        cout << "Enter your second number: ";
        cin  >> y;
        cout << endl;
        returnValue = division(x, y, resultDivision );
        if (returnValue == 0)
        {
            cout << "Result: " << resultDivision << endl;
            return resultDivision;
        }
        else if (returnValue == 1)
        {
            cout << "Error: Cannot divide by zero.";
            return DIV_ZERO;
        }
        return 2;
    }
    
    // function of Pythagorean equation
    else if (op == "pythagorean")
    {
        cout << "Enter your first number: " ;
        cin  >> x;
        cout << endl;
        cout << "Enter your second number: ";;
        cin  >> y;
        cout << endl;
        cout <<"Equation: " << x << "^2 + " << y << "^2 = " << "c^2" << endl;
        returnValue = pythagorean(x, y, resultPythagorean);
        
        if (returnValue ==0)
        {
            cout <<"Result: " << resultPythagorean << endl; 
            return resultPythagorean;
            
        }
        return 2;
        
    }
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
        cout <<"Equation: "<< x <<"x^2 + " << y << "x + " <<z<< " = 0" << endl;
        returnValue = quadratic(x, y, z, rootNum1, rootNum2);
        
        if (returnValue == 0)
        {
            if (static_cast<int>(rootNum1) != static_cast<int>(rootNum2))
            {
                cout << "Result: " << rootNum1 <<' '<< rootNum2 << endl; 
                return OK;
            }
            else
            {
                cout << "Result: " << rootNum1 << endl;
                return OK;
            }
   
        }
        else if (returnValue == 2)
        {
            cout << "Cannot take square root of a negative number.";
            return SQRT_ERR;
            
        }
        else if (returnValue == 1)
        {
            cout << "Error: Cannot divide by zero.";
            return DIV_ZERO;
            
        }
        return 3;
    }
    
    else
    {
        cout << "Error: Operation not supported. ";
        
    }
   
    
        
    
    return 0 ;
 
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
       // cout << "Cannot take square root of a negative number.";
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
    return 0;
}


int main ()
{
    string operation = " ";
    double num1, num2, num3;
    cout << "Please choose an operation: ";
    cin >> operation;
    cout << endl;
    acquireOperands( operation, num1, num2, num3); 
    return 0;
}