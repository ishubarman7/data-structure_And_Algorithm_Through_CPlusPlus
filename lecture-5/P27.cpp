#include<iostream>
using namespace std;

int Number_Of_1_Bits(int n)
{
    int count = 0;
    while(n!=0)
    {
    if(n&1)
    {
        count++;
    }

    n = n >> 1;

    }

   return count;
}

int main()
{
    int a;
    cout<<"Enter the value of a: ";
    cin>>a;

    int b;
    cout<<"Enter the value of b: ";
    cin>>b;

   int Sum_Of_number_of_1_bits = Number_Of_1_Bits(a) + Number_Of_1_Bits(b);

   cout<<"Number of bits"<<Sum_Of_number_of_1_bits<<endl;


}