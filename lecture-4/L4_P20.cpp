// enter the value of n: 5
//  1  2  3  4  5
//     2  3  4  5
//        3  4  5
//           4  5
//              5
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the value of n: ";
    cin>>n;

    int row = 1;
    
    while(row<=n)
    {
        int space = row-1;

        while(space)
        {
            cout<<" "<<" "<<" ";
            space--;
        }

        int col = 1;
        int value = row;
        while(col<=n-row+1)
        {
            cout<<" "<<value<<" ";
            value++;
            col++;
        }

        cout<<endl;
        row++;
        
    }

}