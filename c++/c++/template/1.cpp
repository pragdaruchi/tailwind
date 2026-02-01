#include<iostream>
using namespace std;
template <typename T>
 T add(T a , T b)
 {
      cout << a+b << endl;
 }
 
 int add1(int a , int b)
 {
    cout << a+b << endl;
 };
int main(){
 add(12.5 , 12.5);
 add1(12.5 , 12.5);
}