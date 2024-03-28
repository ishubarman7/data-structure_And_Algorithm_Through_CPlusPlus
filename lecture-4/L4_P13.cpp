// enter the value of n 5
//  A
//  B  C
//  C  D  E
//  D  E  F  G
//  E  F  G  H  I
#include<iostream>
using namespace std;

int main ()
{
    int n;
    cout << "enter the value of n ";
    cin>>n;

    int row = 1;
    
    // method 1 by me

    // int printing_value = 65;

    // while(row<=n)
    // {
    //     int col = 1;

    //     while(col<=row)
    //     {
    //          char ch = char(printing_value+col-1);
    //          cout<<" "<<ch<<" ";
    //          col = col + 1;
             

    //     }
    //  cout<<endl;
    //  row++;
    //  printing_value = printing_value + 1;
    // }
 
//  method 2 by babbar

    while(row<=n)
    {
        int col = 1;

        while(col<=row)
        {
            char ch = ('A' + row + col -2);
            cout<<" "<<ch<<" ";
            col++;
        }
        
        cout<<endl;
        row++;

    }

}
