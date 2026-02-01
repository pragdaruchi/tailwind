#include <iostream>
using namespace std;
int multi(int a){
    return a*a;
};
int main(){
   int num;
   cout << "Enter a number to get it's  square :";
   cin >> num;
   cout << "Square of " << num << " : " << multi(num);
} 