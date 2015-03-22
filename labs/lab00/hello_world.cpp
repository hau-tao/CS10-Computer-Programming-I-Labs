#include <iostream>
#include <vector>

using namespace std;

// function to fill a 2DVector of characters
void fill2DVector(vector< vector<char> > & vv);

// function to print a 2d vector of characters
void print2DVector(const vector< vector<char> > & vv);

int main()
{
    vector< vector<char> > asciiPic;
    
    fill2DVector(asciiPic);
    
    print2DVector(asciiPic);
    
    return 0;
}


void fill2DVector(vector< vector<char> > & vv)
{
    char c;
    vector<char> line;
    int row = 0;
    
    cin >> c;
    while(cin)
    {
        line.clear();
        vv.push_back(line);
        while(c != '\n' && cin)
        {
            cout << c;
            vv.at(row).push_back(c);
            cin >> c;
        }
        cout << "   " << row << endl;
        ++row;
    }
}

void print2DVector(const vector< vector<char> > & vv)
{
    for (int row = 0; row < vv.size(); ++row)
    {
        for (int col =0; col << vv.at(row).size(); ++col)
        {
            cout << vv.at(row).at(col);
        }
        cout << endl;
    }
}