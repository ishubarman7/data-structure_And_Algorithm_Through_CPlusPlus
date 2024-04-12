#include<iostream>
using namespace std;



int main()
{
    int arr[10];
    for(int i = 0; i < 10; i++)
    {
        cout <<"enter the value of "<<i<<"th number of elements"<<endl;
        cin >> arr[i];
    }

    for(int i = 0; i<10; i++)
    {
        cout << arr[i] << endl;
    }
}