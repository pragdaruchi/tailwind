#include<iostream>
using namespace std;
//hyarecial
class father
{
 public:
 void greet(){
     cout << "Greeting from father" << endl;
}
};

class child1 : public father{
    public:
    void greet2(){
       cout << "Greeting from child1" << endl;
    }
 };

 class child2 : public father{
    public:
    void greet3(){
       cout << "Greeting from child2" << endl;
    }
 };
int main(){
 child1 obj;
 obj.greet2();
 child2 obj2;
 obj2.greet3();

} 