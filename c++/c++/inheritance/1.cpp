#include<iostream>
using namespace std;
class parent{
 public:
 void greet(){
    cout << "Greeting from parente" << endl;
 }
};
//simpal 
 class Child : public parent{
    public:
    void greet2(){
       cout << "Greeting from child" << endl;
    }
 };
int main(){
 Child obj;
 obj.greet();
 obj.greet2();
} 