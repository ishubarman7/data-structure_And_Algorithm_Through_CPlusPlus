// enter the value of n: 5
//  1
//  2  3
//  3  4  5
//  4  5  6  7
//  5  6  7  8  9
#include<iostream>
using namespace std;

int main ()
{
    int n;
    cout<< "enter the value of n: ";
    cin>> n;

    int row = 1;

//  method 1 
    while(row<=n)
    {
        int col = 1;
        int printing_value = row;
        while(col<=row)
        { 
            cout<<" "<< printing_value <<" ";
            col = col + 1;
             printing_value =  printing_value + 1;
        }

        cout<<endl;
        row = row + 1;
    }

// method 2 : it consumes atleast 20 min to think

/*
while(row<=n)
    {
        int col = 0;
        while(col<row)
        { 
            cout<<" "<< row + col <<" ";
            col = col + 1;
            
        }

        cout<<endl;
        row = row + 1;
    }
*/

}