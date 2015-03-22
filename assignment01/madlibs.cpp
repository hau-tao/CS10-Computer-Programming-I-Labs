//  =============== BEGIN ASSESSMENT HEADER ================
/// @file madlibs.cpp
/// @brief assignment01/madlibs
///
/// @author hau_tao_1 [taoquanghau@gmail.com]
/// @date June 26, 2014
///
/// @par Plagiarism Section
/// I hereby certify that I have not received assistance on this assignment,
/// or used code, from ANY outside source other than the instruction team.
//  ================== END ASSESSMENT HEADER ===============
#include <iostream>
#include <string>

using namespace std;

int main ()
{
    string measureStick (80, '-');
    string mealEat;
    string placeGo;
    string meetWho;
    string toDrink;
    string storeGo;
    string buyWhat;
    string brandName;
    string firstColor;
    string firstPrice;
    string newColor;
    cout << " Please enter meal that you eat: ";
    cin >> mealEat;
    cout << endl << endl;
    
    cout << " Please enter a place you go: ";
    cin >> placeGo;
    cout << endl << endl;
    
    cout << " Please enter a person you meet: ";
    cin >>  meetWho;
    cout << endl << endl;
    
    cout << " Please enter which you drink: ";
    cin >> toDrink;
    cout << endl << endl;
    
    cout << " Please enter store you go: ";
    cin >> storeGo;
    cout << endl << endl;
    
    cout << " Please enter which one you buy: ";
    cin >> buyWhat;
    cout << endl << endl;
    
    cout << " Please enter a laptop's brand name you want: ";
    cin >> brandName;
    cout << endl << endl;
    
    cout << " Please enter the first color you see: ";
    cin >> firstColor;
    cout << endl << endl;
    
    cout << " Please enter the first price you are asked to pay: ";
    cin >> firstPrice;
    cout << endl << endl;
    
    cout << " Please enter the new color you choose: ";
    cin >> newColor;
    cout << endl << endl;
    
    cout << measureStick << endl;
    //1st paragraph
    cout << "Today, I wake up earlier than the other days";
    cout << "because I have an appointment. I "<< endl;
    cout << "get off the bed and go to the restroom to take a bath.";
    cout << " And then, I have a " << endl;
    cout << mealEat << " with my family. While I’m having a breakfast,";
    cout << " I got a phone call." << endl;
    cout << "After that, I go to " << placeGo << " to meet " << meetWho;
    cout << ". We order " << toDrink << " to drink." <<endl;
    cout << endl;
    
    //2st paragraph
    cout << "Then, we decide to go to the big " << storeGo;
    cout << " to buy " << buyWhat << ". My laptop has " << endl;
    cout << "just broken, so I need to buy a new one. ";
    cout << "We come to laptop’s store to buy it." <<endl;
    cout << "When I come there, I see a laptop " << brandName;
    cout << ". It is " << firstColor << ". It’s pretty " << endl;
    cout << "nice and has the strong configuration. " << endl << endl;
    
    //3rd paragraph
    cout << "When I ask the seller for the price, ";
    cout << "It is much more expensive than my old one. " << endl;
    cout << "It is more than " << firstPrice;
    cout << " and I have to choose another version of this laptop." <<endl;
    cout << "I choose " << newColor << ". Although the new version ";
    cout << "has the weaker configuration than" << endl; 
    cout << "the previous one, it is still good enough. ";
    cout << "And I decide to buy it. " << endl;
    cout << measureStick << endl;
   
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
    