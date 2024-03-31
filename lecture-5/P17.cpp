// lecture 8 HW at 15 minute about the exit() function

#include<iostream>
using namespace std;

int main ()
{
    char ch = 'a';
    int num = 1;

    while(1)
    {

        switch(num)
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

        exit(0);

    }

    cout<<endl;

}