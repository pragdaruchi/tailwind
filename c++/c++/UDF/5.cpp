#include<iostream>
using namespace std;

void sum(){

   int num;
   cout << "Enter Any Number : ";
   cin >> num;

   int arr[num];
   
   for (int i=0; i<num; i++)
   {
   cout << "Enter The Value :";
   cin >> arr[i];
   }    

  int choice;
  cout << "Enter Any Number :" <<endl;
  cout << "1. Addition" <<endl;
  cout << "2 . Average" <<endl;
  cin >> choice;

  int sum = 0 ;
   
  for (int i=0; i<num; i++)
  {
    sum += arr[i];
  }

  if (choice == 1)
  {
    cout << "Sum of array is " << sum << endl;
  }

  else if (choice == 2)
  {
    int average = sum/num;
    cout << "average of array is " << average << endl;
  }

  else 
  {
    cout << "Invalid choice !";
  }
};

int main(){
   sum();
}      