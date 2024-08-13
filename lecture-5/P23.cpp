
#include<iostream>
using namespace std;


int factorial(int n)
{
    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;

}

int nCr(int n, int r)
{
    int numerator = factorial(n);

    int denominator = factorial(r) / factorial(n-r);

    int final_ans = numerator / denominator;

    return final_ans;
}
int main ()
{
    int a;
    int b;
    cin>>a;
    cin>>b;

    
    int answer = nCr(a,b);
    cout<<"nCr of "<<a<<" and "<<b<<" is "<<answer<<endl;
}