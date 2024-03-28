// sum of consicutive numbers
// Enter the value of of n: 5
// 15
#include<iostream>
using namespace std;

int main ()
{
    int  n;
    cout<<"Enter the value of of n: ";
    cin>>n;

    int sum = 0;

    for (int i = 1; i<=n ; i++)
    {
        sum = sum +i;
    }

    cout<<sum<<endl;

}