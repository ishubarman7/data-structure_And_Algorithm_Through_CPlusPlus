#include<iostream>
using namespace std;

int main() {
  
  char c;
  cout << "Enter value for c" << endl;
  cin >> c;

  if (c >= 'a' && c <= 'z') 
  {
    cout << "Lower Case" << endl;
  } 


  else if (c >= 'A' && c <= 'Z') 
  {
    cout << "Upper Case" << endl;
  } 


  else if (c >= '0' && c <= '9') 
  {
    cout << "Numeric" << endl;
  }


}


