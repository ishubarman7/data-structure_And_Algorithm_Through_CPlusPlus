#include<iostream>
using namespace std;

int main()
{
    char arr[5];

    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
         cout<<"Printing the array "<<endl;
    for(int i = 0;i < 5;i++)
    {
        cout << arr[i] << "  ";
    }
}