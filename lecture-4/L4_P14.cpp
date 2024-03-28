//  
#include<iostream>
using namespace std;

int main ()
{
    int n;
    cout << "enter the value of n ";
    cin>>n;

    int row = 1;
    
    // int printing_value = 65;

    // while(row<=n)
    // {
    //     int col = 1;

    //     while(col<=row)
    //     {
    //          char ch = char(printing_value+n-1);
    //          cout<<" "<<ch<<" ";
    //          col = col + 1;
             

    //     }
    //  cout<<endl;
    //  row++;
    //  printing_value = printing_value + 1;
     
    // }

 
//  method 2 by babbar

    while(row<=n)
    {
        int col = 1;
        char start = ('A' + n - row);
        while(col<=row)
        {
            
            cout<<" "<< start<<" ";
            col++;
           start++;
        }
        
        cout<<endl;
        row++;

    }

}



