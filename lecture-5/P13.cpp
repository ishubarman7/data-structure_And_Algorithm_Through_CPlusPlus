/*
Leet code question 1009
>> Complement of base 10
*/

#include<iostream>
using namespace std;

int main()
{   
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    
    int com = ~n;

    int mask = 0;

    while(n!=0)
    {
        mask = mask<<1 | 1;

        n = n>>1;

    }

    int result = com&mask;

    cout<<result;
}