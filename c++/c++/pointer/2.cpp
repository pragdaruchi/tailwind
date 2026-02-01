#include<iostream>
using namespace std;
// void sum(int &a){
//     a = a+10;
// }
int main(){

   
    // reference variable
    int a  = 10;
    int &b = a;
    b = 25;
    cout << a << endl;
    cout << b << endl;
     
    // int a = 10;
  // cout << "before sum : " << a << endl;
  // sum (a);
  // cout << "after  sum : " << a << endl;
}  