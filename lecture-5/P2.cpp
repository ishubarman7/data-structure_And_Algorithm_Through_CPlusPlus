// Enter the value of of n: 10
//  1
//  2
//  3
//  4
//  5
//  6
//  7
//  8
//  9
//  10
#include<iostream>
using namespace std;

int main ()
{
    int  n;
    cout<<"Enter the value of of n: ";
    cin>>n;
    int i = 1;
    for(; ; )
    {
        if(i<=n)
        {
             cout<<" "<<i<<" "<<endl;
        }

        else
        {
            break;
        }

        i++;
    }
    
}