/*

this is the first code in which we use functions functionality that is reuse
 of same function multiple times by just calling the same function multiple times 
 instead of making the same function again and again.

*/

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
    cout<< a << " to the power " << b << " is: " << answer <<endl;
    cout<<endl;

    int c , d;
    cin>> c >> d ;

    int answer1 = power(c, d);
    cout<< c << " to the power " << d << " is: "  <<  answer1 << endl;
    cout<<endl;

    int e , f;
    cin>> e >> f ;

    int answer2 = power(e, f);
    cout<< e << " to the power " << f << " is: "  << answer2 << endl;
    cout<<endl;

    int g , h;
    cin>> g >> h ;

    int answer3 = power(g, h);
    cout<< g << " to the power " << h << " is: " << answer3 << endl;
}