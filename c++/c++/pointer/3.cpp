#include<iostream>
using namespace std;
void sum(int &b){
 b =  b + 10;
}
int main(){
 int b =  10;
 cout << "before number is : " << b << endl;
 sum(b);
 cout << "after number is : " << b << endl;
}