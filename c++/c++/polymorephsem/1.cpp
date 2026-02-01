#include<iostream>
using namespace std;
//method overloading
class calc{
    public:
    int sum(int a , int b){
           cout << a+b << endl;
    }
    int sum(int a , int b , int c){
        cout << a+b+c << endl;
 }
};
int main(){
    calc obj;
    obj.sum(12,24,36);   
    obj.sum(10,10,10);
}   