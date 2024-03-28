// enter the value of n: 5
//              1 
//           1  2  1 
//        1  2  3  2  1 
//     1  2  3  4  3  2  1 
//  1  2  3  4  5  4  3  2  1 
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
        int space = n-row;

        while(space)
        {
            cout<<" "<<" "<<" ";
            space--;
        }

        int col = 1;
        int value = 1;
        while(col<=row)
        {
            cout<<" "<<value<<" ";
            value++;
            col++;
        }
         
         int value_2 = row - 1;
        while(value_2)
        {
            cout<<" "<<value_2<<" ";
            value_2--;
        }

        cout<<endl;
        row++;
        
    }

}