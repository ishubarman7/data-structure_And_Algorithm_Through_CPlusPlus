#include<iostream>
using namespace std;

int main()
{

            //    Only the first element of the array become 1 and rest of the element save the value as 0(zero).

    int arr_1[100] = {1};

    for(int i = 0; i < 100; i++)
    {
        cout << arr_1[i] << " ";
    }
     cout<<endl<<endl;

     
                // all the element in this situation become zero but there is a twist in this case.
                // (first element become 0 because i declare it to be 0 but the rest of element become 0 because there is no declaration for the rest element after declaring first element ).
                
    int arr[100] = {0};

    for(int i = 0; i < 100; i++)
    {
        cout << arr[i] << " ";
    }
    
}