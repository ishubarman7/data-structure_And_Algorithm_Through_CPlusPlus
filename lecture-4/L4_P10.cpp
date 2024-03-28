// enter the value of n: 5
//  A  B  C  D  E
//  B  C  D  E  F
//  C  D  E  F  G
//  D  E  F  G  H
//  E  F  G  H  I
#include<iostream>
using namespace std;

int main ()
{
    int n;
    cout<< "enter the value of n: ";
    cin>> n;

    int row = 1;

    //  method 1 by myself

   

    while(row<=n)
    {
        int col = 1;
         int printing_value = 65 + row - 1;
        while(col<=n)
        { 
            char ch = printing_value;
            cout<<" "<<ch<<" ";
            col = col + 1;
              printing_value =  printing_value + 1; 
        }
        
        cout<<endl;
        row = row + 1;
        
    }

}