
#include<iostream>
using namespace std;

int power(int x, int y)
{
    int result = 1;

    for(int i = 1; i <= y; i++)
    {
        result = result * x;
    }

    return result;

}


int main()
{
    int a , b;
    cin>> a >> b ;

    int answer = power(a, b);
    cout<< answer << endl;

    int c , d;
    cin>> c >> d ;

    int answer1 = power(c, d);
    cout<< answer1 << endl;

    int e , f;
    cin>> e >> f ;

    int answer2 = power(e, f);
    cout<< answer2 << endl;

    int g , h;
    cin>> g >> h ;

    int answer3 = power(g, h);
    cout<< answer3 << endl;
}