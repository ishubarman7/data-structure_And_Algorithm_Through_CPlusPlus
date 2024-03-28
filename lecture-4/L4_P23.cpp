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

         // printing of first triangle

         int col = 1;
        int value = 1;
        while(col<=n-row+1)
        {
            cout<<" "<<value<<" ";
            value++;
            col++;
        }
         
         // printing of second triangle

          int star_2 = row-1;

        while(star_2)
        {
            cout<<" "<<'*'<<" ";
            star_2--;
        }
         // printing of third triangle
    
         int star = row-1;
         while(star)
        {
            cout<<" "<<'*'<<" ";
            star--;
        }

         int value_2 = n-row+1;
        while(value_2)
        {
            cout<<" "<<value_2<<" ";
            value_2--;
        }
        
        // printing of first triangle

        cout<<endl;
        row++;
        
    }

    
        

}