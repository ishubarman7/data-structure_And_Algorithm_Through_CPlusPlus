//switch statement
#include<iostream>
using namespace std;

int main ()
{
    char ch = 'a';
    int num = 1;

    cout<<endl;

    switch(ch)
    {

        case  1: cout << "First"<<endl;
                 cout << "First again"<<endl;
                 break;

        case '1': cout << "Second"<<endl;
                  break;

        case  3:  cout << "Third"<<endl;
                  break;

        default:  cout<< " this is default case "<<endl;

    }

    cout<<endl;

}