// A simple calculator in c++ byy the use of switch statemnet

#include<iostream>
using namespace std;

int main()
{
    int a;
    cout <<"Enter the value of a: "<<endl;
    cin>>a;

    int b;
    cout<<"Enter the value of b: "<<endl;
    cin>>b;

    char op;
    cout<<"Enter the value of op: "<<endl;
    cin>>op;


    switch(op)

    {

        case '+': cout<< a + b <<endl;
                  break;

                  
        case '-': cout<< a - b <<endl;
                  break;

                  
        case '*': cout<< a * b <<endl;
                  break;

                  
        case '/': cout<< a / b <<endl;
                  break;

                  
        case '%': cout<< a % b <<endl;
                  break;
       
        
    }


}




// #include<iostream>
// using namespace std;

// int main()
// {
//     int a;
//     int b;
//     char op;

//     cout <<"Enter the exprssion and separate it with spaces: "<<endl;
//     cin>>a;
//     cin>>op;
//     cin>>b;

    


//     switch(op)

//     {

//         case '+': cout<< a + b <<endl;
//                   break;

                  
//         case '-': cout<< a - b <<endl;
//                   break;

                  
//         case '*': cout<< a * b <<endl;
//                   break;

                  
//         case '/': cout<< a / b <<endl;
//                   break;

                  
//         case '%': cout<< a % b <<endl;
//                   break;
       
        
//     }


// }