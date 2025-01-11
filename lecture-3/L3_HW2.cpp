#include<iostream>
using namespace std;

int main ()
{
    int n;
    cout<< "enter the value of n: ";
    cin>> n;

    int i = 0;
    int sum = 0;

while(i<=n)
{
    sum = sum + i;
    i = i + 2;
}

cout<< "sum of prime numbers from 0 to "<<n<< "is: "<< sum <<endl;
}