#include<iostream>
using namespace std;

int main ()
{
   int n;
    cout<< "enter the value of n: ";
    cin>> n;

    int i = 2;

    while( i<n)
    {
        // divide hogaya to not prime hain
        if(n%i==0)
        {
            cout<< "not prime for "<< i <<endl;
        }
        else
        {
            cout<< "its a prime no. for "<< i <<endl;
        }
        i = i + 1;

    }
 
}

