
#include<iostream>
using namespace std;

bool Even_Ood(int a)
{
    if(a&1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int num ;
    cin >> num;

    if(Even_Ood(num))
    {
        cout<< "Number is Even"<<endl;
    }
    else
    {
        cout<< "Number is Ood"<<endl;
    }
}