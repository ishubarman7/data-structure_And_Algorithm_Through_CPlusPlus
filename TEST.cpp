
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
    int n;
    int r;
    cout << "enter the values of n and r respectively" << endl;
    cin>>n;
    cin>>r;

    int ans = nCr(n, r);
    cout<<"nCr of "<<n<<" and "<<r<<" is "<<ans<<endl;
}