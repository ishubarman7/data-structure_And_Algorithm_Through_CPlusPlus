// enter the value of n: 5
//  A  A  A  A  A
//  B  B  B  B  B
//  C  C  C  C  C
//  D  D  D  D  D
//  E  E  E  E  E
#include<iostream>
using namespace std;

int main ()
{
    int n;
    cout<< "enter the value of n: ";
    cin>> n;

    int row = 1;

    //  method 1 by myself

    int printing_value = 65;

    while(row<=n)
    {
        int col = 1;
        
        while(col<=n)
        { 
            cout<<" "<< char(printing_value) <<" ";
            col = col + 1;
              
        }
         printing_value =  printing_value + 1;
        cout<<endl;
        row = row + 1;
        
    }

//   methos 2 by babbar

/*
    while(row<=n)
    {
        int col = 1;
        
        while(col<=n)
        { 
            char ch = 'A' + row - 1;
            cout<<" "<< ch <<" ";
            col = col + 1;
              
        }
        
        cout<<endl;
        row = row + 1;
        
    }
*/
}