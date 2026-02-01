#include<iostream>
using namespace std;
//multilevel
class Grandparent
{
 public:
 void greet(){
    cout << "Greeting from Grandparents" << endl;
 }
};

 class parent : public Grandparent{
    public:
    void greet2(){
       cout << "Greeting from parents" << endl;
    }
 };
 class child : public parent{ 
    public:
    void greet3(){
       cout << "Greeting from child" << endl;
    }
 };
int main(){
 child obj;
 obj.greet();
 obj.greet2();
 obj.greet3();
} 