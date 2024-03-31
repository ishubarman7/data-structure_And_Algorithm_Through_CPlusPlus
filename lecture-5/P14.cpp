/*leet code question no 231*/

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter theh value of n: ";
    cin>>n;
    int ans = 0;
    for(int i=0; i<= 30; i++)
    {
        ans  = pow(2,i);

        // int ans = ans * 2;

        if (ans ==n)
        {
            cout<< "It is a power of 2"<<endl;
            break;
        }
         
    }

   if(ans != n)
    {
        cout<< "it is not"<<endl;
    }
          cout<<ans;
    }
    

