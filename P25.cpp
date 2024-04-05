#include<iostream>
using namespace std;

bool isprime(int n)
{
    for(int i=2; i<n-1 ; i++)
    {
        if(n%i == 0)
        {
           return 0;
        }
        
    }
       return 1;
}

int main()
{
    int n;
    cin>>n;

   if(isprime(n))
   {
    cout<<"Number is prime"<<endl; 
   }
   else
   {
     cout<<"Number is not prime"<<endl;
   }
}