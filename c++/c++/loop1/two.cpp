#include <iostream>
using namespace std;

int main() {
   
    int fact=1;
    int num;
    cout << "Enter a number :";
    cin >> num;
    for (int i=1; i<=num;  i++)
    {
      if (num <=1)
      {
        fact = 1;
        break;
      }
      
      fact = fact * i; 
    }
    cout << "fact of " <<  num  << " is  " << fact;
}
