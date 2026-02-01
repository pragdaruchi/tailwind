#include<iostream>
using namespace std;
#include<string.h>
class person{

    private:
     char name[50];
     int age;
     char city[50];
    //default call constructor
       public:
     person(){
       cout << "Hello World!";
     }
};
int main(){
    person obj; 
}