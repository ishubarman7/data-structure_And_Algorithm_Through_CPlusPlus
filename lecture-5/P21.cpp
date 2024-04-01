

#include<iostream>
using namespace std;

int power()
{   
    int x,y;
    cin>>x>>y;

    int result = 1;

    for(int i = 1; i <= y; i++)
    {
        result = result * x;
    }

    return result;

}


int main()
{
    

    int answer = power();
    cout<< answer << endl;
    cout<<endl;
   

    int answer1 = power();
    cout<< answer1 << endl;
    cout<<endl;
    

    int answer2 = power();
    cout<< answer2 << endl;
    cout<<endl;
   

    int answer3 = power();
    cout<< answer3 << endl;
    cout<<endl;
}