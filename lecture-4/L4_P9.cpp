// enter the value of n: 5
//  A  B  C  D  E
//  A  B  C  D  E
//  A  B  C  D  E
//  A  B  C  D  E
//  A  B  C  D  E
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
        int printing_value = 65;
        while(col<=n)
        { 
            cout<<" "<< char(printing_value) <<" ";
            col = col + 1;
              printing_value =  printing_value + 1;
        }
         
        cout<<endl;
        row = row + 1;
        
    }
// method 2 by babbar HW
/*
while(row<=n)
    {
        int col = 1;
        
        while(col<=n)
        { 
            char ch = 'A' + col - 1;
            cout<<" "<< ch <<" ";
            col = col + 1;
              
        }
        
        cout<<endl;
        row = row + 1;
        
    }
*/
}