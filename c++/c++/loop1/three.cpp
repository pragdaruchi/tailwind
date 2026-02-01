#include <iostream>
using namespace std;

int main() {
   
   int sum=0;
   int num;
  cout << "Enter any number:";
  
 cin >> num;
   
 while (num%2!=0)
 {
  sum = sum +num;
 }
 cout << "sum of " << num << "is";
    
}
