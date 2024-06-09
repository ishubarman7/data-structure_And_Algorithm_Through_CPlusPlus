// this code is basically gives the no. of note(rs100, rs50, rs20, rs1) required to have some anount of money

#include<iostream>
using namespace std; 

int main ()
{
    int n;
    cout<< " Enter the value of n: ";
    cin>>n;

    //  initially lets assume we have zero nubers of notes.

    int rs100_note = 0;
    int rs50_note = 0;
    int rs20_note = 0;
    int rs1_note = 0;

                //    below switch case update the value of rs100_note and update it for next switch statement.
    switch(n>=100)

        {
            case 1: rs100_note = n/100;
            n = n - rs100_note * 100;
             break;

        }
               
               //    below switch case update the value of rs50_note and update it for next switch statement.
    switch(n>=50)

        {
            case 1: rs50_note = n/50;
            n = n - rs50_note * 50;
             break;

        }
                
                //    below switch case update the value of rs20_note and update it for next switch statement.
    switch(n>=20)

        {
            case 1: rs20_note = n/20;
            n = n - rs20_note * 20;
             break;

        }

                //    below switch case update the value of rs1_note.
    switch(n>=1)

        {
            case 1: rs1_note = n/1;
            n = n - rs1_note * 1;
             break;

        }    

        cout<<"Number of 100 rs notes Required: "<< rs100_note << endl;
        cout<<"Number of 50 rs notes Required: "<< rs50_note << endl;
        cout<<"Number of 20 rs notes Required: "<< rs20_note << endl;
        cout<<"Number of 1 rs notes Required: "<< rs1_note << endl;
        cout<<endl;

         cout<<"Total Number of notes Required: "<< rs100_note + rs50_note + rs20_note + rs1_note<< endl;





    
}