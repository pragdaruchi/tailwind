#include<iostream>
using namespace std;
int main(){
    // int fact=1;
    // int num;
    // cout << "Enter a number :";
    // cin >> num;
    // cout << "Factors of" << num << "is";
    // for (int i=1; i<=num;  i++)
    // {
      
    //   fact = fact * i; 
    // }
    // cout << "fact of " << num << "is" << fact;
     int num = 100;
     int count = 0;
     do
     {
     num =num /10;
     count ++;
     } while (num!=0);
     cout << count;
     
    // int num;
    // cout << "Enter any dight:";
    // cin >> num ;
    // int lastDight = num % 10;
    // int FirstDight;
    // while (num >=10)
    // {
    //  num =num /10;
    //  FirstDight = num;
    // }
    // int sum = lastDight + FirstDight;
    // cout  << "Sum of first and last dight: " << sum << endl; 

//  for (int  i = 1; i<=5; i++)
//  {
//   for (int j =1; j<=5; j++)
//   {
//     cout << j ;
//   }
//   cout << endl;
//  }
//  for (int  i = 1; i<=5; i++)
//  {
//   for (int j =1; j<=i; j++)
//   {
//     cout << j ;
//   }
//   cout << endl;
//  }
// for (int i=5; i>=1; i--)
// {
//   for (int  j=1; j<=i; j++)
//   {
   
//   cout << j;
//   }
//   cout << endl;
  
// }

// for (int i=5; i>=1; i--)
// {
//   for (int  j=1; j<=i; j++)
//   {
//     cout << j;
//   }
//   cout << endl;
//   }
  for (int i=5; i>=1; i--)
{
  for (int  j=i; j<=5; j++)
  {
    cout << j;
  }
  cout << endl;
  }
  
}
