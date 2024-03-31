//switch statement first
#include<iostream>
using namespace std;

int main ()
{
    char ch = 'a';
    int num = 65;

    cout<<endl;

    switch(char(num))
    {

        case  'A': cout << "First"<<endl;
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