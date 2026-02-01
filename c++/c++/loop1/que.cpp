#include<iostream>
using namespace std;
int main(){
   int num;
   cout << "Enter any number:" << endl;
   cin >> num ;
   for (int i=0; i<=num; i++)
   {
      if (i%3==0 && i%5==0)
      {
         cout <<  i << endl;
      }
      
   }
   
}