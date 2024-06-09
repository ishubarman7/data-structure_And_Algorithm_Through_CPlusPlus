/*leet code question no 231*/

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter theh value of n: ";
    cin>>n;
    int ans = 1;
    for(int i=0; i<= 30; i++)
    {
         ans = ans * 2;

        if (ans ==n)
        {
            cout<< "It is a power of 2";

        }
    }

    cout<< "it is not";
}