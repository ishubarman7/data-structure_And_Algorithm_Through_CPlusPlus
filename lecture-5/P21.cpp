

#include<iostream>
using namespace std;

      //if we note give the input parameters and initialize the variables under the curly brases on funtion
     // then we dont have to intialise the variable at the time of using this funcion again and agin as we see in p20.cpp

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
    cout<<"Answer is: "<< answer << endl;
    cout<<endl;
   

    int answer1 = power();
    cout<<"Answer is: "<< answer1 << endl;
    cout<<endl;
    

    int answer2 = power();
    cout<<"Answer is: "<< answer2 << endl;
    cout<<endl;
   

    int answer3 = power();
    cout<<"Answer is: "<< answer3 << endl;
    cout<<endl;
}