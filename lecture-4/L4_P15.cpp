// enter the value of n: 5
//              *
//           *  *
//        *  *  *
//     *  *  *  *
//  *  *  *  *  *
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<< "enter the value of n: ";
    cin>>n;

    int row = 1;
    
   
    while(row<=n)
    {
        int space = n - row;
        while(space)
        {
            cout<<" "<<' '<<" ";
            space--;
        }

         int col = 1;
        while(col<=row)
        {
            cout<<" "<<'*'<<" ";
            col++;
        }
        
        cout<<endl;
        row++;
    }

}