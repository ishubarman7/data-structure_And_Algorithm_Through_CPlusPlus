// enter the value of n: 5
//  A
//  B  B
//  C  C  C
//  D  D  D  D
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
        
        while(col<=row)
        { 
              char ch = char(printing_value);
              cout<<" "<<ch<<" ";
              col = col + 1;
             
        }
         
        cout<<endl;
        row = row + 1;
         printing_value =  printing_value + 1;
    }

}