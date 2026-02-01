#include <iostream>
using namespace std;
int multi(int num){
    if (num <= 1)
    {
       return 1;
    };
    return num * multi(num-1);
    
};
int main(){
   cout << "Enter a number to find factorial : ";
   int num ;
   cin >> num;
   cout << "The factorial of " << num << " is "<< multi(num);
   
   return 0;
}