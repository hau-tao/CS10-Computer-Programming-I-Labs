//  =============== BEGIN ASSESSMENT HEADER ================
/// @file lab9.cpp
/// @brief Lab 9
///
/// @author hau_tao_1 [taoquanghau@gmail.com]
/// @date July 21, 2014
//  ================== END ASSESSMENT HEADER ===============
#include <vector>
#include <cmath>
#include <iostream>


using namespace std;

void fillVector(vector <double> &);
double average(const vector <double> &);
double standardDeviation (vector <double> &);

 
int main()
{
    double value;
    vector<double> originalVector ;
    fillVector(originalVector);
    value = standardDeviation (originalVector);
    cout << " expecting 0, got: "    << value  << endl;
    
    
    return 0;
}

void fillVector(vector <double> &v)
{
    double d;
    while (cin >> d)
    {
        v.push_back(d);
    }
}

double average(const vector <double> &v)
{
    double sum = 0.;
    for (int i = 0; i < v.size(); i++)
    {
        sum += v.at(i);
    }

    return sum / v.size();
}


// function of standard deviation
double standardDeviation (vector <double> &v)
{
    double temp = 0.0;
    double diff = 0.0;
    
    
    for (int i = 0; i < v.size() ; ++i )
    {
        
        diff = v.at(i) - average (v); // differ from average
        temp += pow (diff, 2);
        
        
    }
    
   
        
    
    
    
    
    return sqrt(temp / v.size());
    
}
