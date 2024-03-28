// enter the value of n: 5
//  A
//  B  C
//  D  E  F
//  G  H  I  J
//  K  L  M  N  O
#include<iostream>
using namespace std;

 int main ()
 {
    int n;
    cout<< "enter the value of n: ";
    cin>> n;

    int row = 1;

    int inc =65;

    

    while(row<=n)
    {
        int col = 1;

        while(col<=row)
        {
             char character = char(inc);
             cout<<" "<<character<<" ";
             col = col + 1;
              inc = inc + 1;

        }
         cout<<endl;
         row = row + 1;
        
    }
     
 }