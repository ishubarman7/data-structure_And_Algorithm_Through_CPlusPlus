// switch statement in another switch statement example

#include<iostream>
using namespace std;

int main ()
{
    char ch = '1';
    int num = 1;

    cout<<endl;

    switch(1)
    {

        case  1: cout << "First"<<endl;
                 cout << "First again"<<endl;
                 break;

        case '1': switch(num)    // we can also use switch statement in another switch statement
                  {

                    case  1: cout << "Value of num is 1 "<<endl;
                             cout << "First again"<<endl;
                             break;

                  }

                  break;

        case  3:  cout << "Third"<<endl;
                  break;

        default:  cout<< " this is default case "<<endl;  // default case is executed when no condition is met and not a single case executed

    }

    cout<<endl;

}