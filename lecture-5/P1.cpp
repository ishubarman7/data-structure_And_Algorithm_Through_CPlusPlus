#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<< "Enter the value of a: ";
    cin>>a;

    int b;
    cout <<"Enter the value of b: ";
    cin>>b;


    cout<< "the value of a&b: "<< (a&b) <<endl;
    cout<< "the value of a|b: "<< (a|b) <<endl;
    cout<< "the value of ~a: "<< (~a) <<endl;
    cout<< "the value of a^b: "<< (a^b) <<endl;

    cout<< (17>>1) <<endl;   // >> this operater basically do half the original number
    cout<< (17>>1) <<endl;   // >> this operater basically do double half the original number 
    cout<< (19<<1) <<endl;   // << this operater basically double the original number
    cout<< (21<<1) <<endl;   // << this operater basically double the original number 2 times

    int i = 7;

    cout<< (++i) <<endl;
    cout<< (i++) <<endl;
    cout<< (i--) <<endl;
    cout<< (--i) <<endl;
    

}