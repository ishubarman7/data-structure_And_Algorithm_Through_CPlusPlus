#include<iostream>
using namespace std;

int main() {


    int a;
    cout<< "enter the value of a: ";
    cin>> a;

    //method_1 by using multiple if else operator

    if(a>0) 
    { 
      cout<< " a is positive no."<<endl;
    }

    else 
    {
        cout<< "a is negative no.: "<<endl;
        if(a<0) {
            cout<< "a is negative no.: "<<endl;
        }
        else{
            cout<< "a is ZERO "<<endl;
        }
    }
 //method_2 by using multiple else if operator

/* 

 if(a>0) { 
      cout<< " a is positive no."<<endl;
    }

    else if (a<0){
        cout<< "a is negative no.: "<<endl;
        if(a<0) {
            cout<< "a is negative no.: "<<endl;
        }
        else{
            cout<< "a is ZERO "<<endl;
        }
    }
 else{
            cout<< "a is ZERO "<<endl;
        }

  */
}


