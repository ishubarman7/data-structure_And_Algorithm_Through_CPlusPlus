#include<iostream>
using namespace std;

int fibbonacci(int n)
{
    int a = -1;
    int b = 1;

    for(int i=0;i<n;i++)
    {
        int sum = a + b;

        cout << sum <<" ";

        a = b;
        b = sum;
    }

    return 0;
}
int main ()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    fibbonacci(n);
}