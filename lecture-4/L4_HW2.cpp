// enter the value of n: 5
//  A  B  C  D  E
//  F  G  H  I  J
//  K  L  M  N  O
//  P  Q  R  S  T
//  U  V  W  X  Y
#include<iostream>
using namespace std;

int main ()
{
    int n;
    cout<< "enter the value of n: ";
    cin>> n;

    int row = 1;

    //  method 1 by myself

    // int printing_value = 65;

    // while(row<=n)
    // {
    //     int col = 1;
        
    //     while(col<=n)
    //     { 
    //         cout<<" "<< char(printing_value) <<" ";
    //         col = col + 1;
    //           printing_value =  printing_value + 1;
    //     }
         
    //     cout<<endl;
    //     row = row + 1;
        
    // }

    // method of babbar HW

       char ch = 'A';

    while(row<=n)
    {
        int col = 1;
       
        while(col<=n)
        { 
            
            cout<<" "<< ch <<" ";
            col = col + 1;
            ch = ch + 1;
        }
        
        cout<<endl;
        row = row + 1;
        
    }

}