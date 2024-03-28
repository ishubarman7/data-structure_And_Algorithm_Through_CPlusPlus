/*
Leetcode question no 1281
>> subtract the product and sum of digits of an integer.
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int product = 1;
    int sum = 0;

    while (n!=0)
    {
        int digit = n % 10;

        product = product * digit;
        sum = sum + digit;

        n = n / 10;
        
    }

    int final_answer = product - sum;
    cout<<"the difference b/t the product and sum of digits is "<<final_answer;

}