//  5  4  3  2  1
//  5  4  3  2  1
//  5  4  3  2  1
//  5  4  3  2  1
//  5  4  3  2  1
#include<iostream>
using namespace std;

int main ()
{
    int n;
    cout<< "enter the value of n: ";
    cin>> n;

    int i = 1;


    while(i<=n)
    {
        int j = 0;
        while(j<n)
        {
            cout<<" "<<n-j<<" ";
            j = j + 1;
        }

        cout<<endl;
        i = i + 1;
    }


   
}