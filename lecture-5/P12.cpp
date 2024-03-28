 
 #include <iostream>
#include<math.h>
 using namespace std;


 int main()
 {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    
    
    int ans = 0;

   

    while (n!=0)
    {
       int digit = n%10;

        ans = (ans * 10) +digit;

        n = n/10;

    }

     if( (ans<(pow(-2,31)/10)) || (ans>(pow(2,31)-1)/10) )
    {
      cout<<"0";
    }

    else
    {
       cout<<ans;
    }

    
 }