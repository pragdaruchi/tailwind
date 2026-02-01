#include<iostream>
using namespace std;

void sum ( int choice, int a, int b){
  if (choice == 1)
  {
    cout << a+b;
  }
  else if (choice == 2)
  {
    cout << a-b;
  } 
   else if (choice == 3)
  {
    cout << a*b;
  }
  else if (choice == 4)
  {
    cout << a/b;
  }
};
int main(){
   cout << "Welcome to our calculator:"<< endl << endl;
   cout << "Enter Your choice:"<< endl;
   cout << "1. addition" << endl;
   cout << "2. substration" << endl;
   cout << "3.Multiplication" << endl;
   cout << "4.division" << endl;

    int choice; 
    cin >> choice;
    int num1;
    int num2;
    cout << "Enter Any Number:";
    cin >> num1;  
    cout << "Enter Any Number:";
    cin >> num2; 
    sum (choice ,num1 ,num2);  
} 