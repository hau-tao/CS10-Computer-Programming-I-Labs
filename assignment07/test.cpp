#include <iostream>
#include <cstdlib>     // Enables use of rand()
#include <ctime>       // Enables use of time()
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

int rollNDice (int NDice, int NSide)
{
    
    int sumDice =0;
    
    
    
    for (int i =1 ; i <= NDice ; ++i)
    {
        sumDice += rand() % NSide +1;
        
    }
    
    return sumDice;
}
int main ()
{
    srand (333);
    int sum;
    
    for ( int i =0; i<=0; ++i)
    {
    sum +=rollNDice(6, 19);
    }
    cout << sum;
        
    
     
    return 0;
}