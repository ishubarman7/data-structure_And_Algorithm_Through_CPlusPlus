// enter the value of n: 5
// * * * * *
// * * * *
// * * *
// * *
// *
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<< "enter the value of n: ";
    cin>>n;

    int row = 1;
    
   
    while(row<=n)
    {

         int col = 1;
        while( col <= n - row + 1 )
        {
            cout<<" * ";
            col++;
        }
        
        cout<<endl;
        row++;
    }


}