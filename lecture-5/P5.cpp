// fibonacci series
// Enter the value of of n: 10
//  0  1  1  2  3  5  8  13  21  34  55  89
#include<iostream>
using namespace std;

int main ()
{
    int  n;
    cout<<"Enter the value of of n: ";
    cin>>n;

    int a = 0;
    int b = 1;
    
    cout<<" "<<a<<" ";
    cout<<" "<<b<<" ";

    int w = n-2;

for(int i = 1; i<=w; i++)
{
    int sum = a+b;
    cout <<" "<< sum<<" ";

    a = b;
    b = sum;


}

}