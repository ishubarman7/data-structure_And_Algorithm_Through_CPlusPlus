// enter the value of n: 5
//  1 
//  2  1 
//  3  2  1 
//  4  3  2  1 
//  5  4  3  2  1 
#include<iostream>
using namespace std;

int main ()
{
    int n;
    cout<< "enter the value of n: ";
    cin>> n;

    int row = 1;

//  METHOD 1 BY LOVE BABBR
// while(row<=n)
//     {
//         int col = 1;
//         while(col<=row) 
//         { 
//             cout<<" "<< row - col + 1<<" ";
//             col = col + 1;
            
//         }

//         cout<<endl;
//         row = row + 1;
//     }

// METHOD 2 BY MY SELF
while(row<=n)
    {
        int col = 0;
        while(col<row) 
        { 
            cout<<" "<< row - col<<" ";
            col = col + 1;
            
        }

        cout<<endl;
        row = row + 1;
}


}