#include<iostream>
using  namespace std;
#include<string.h>
//default call constructor
class person{

    private:
     char name[50];
     int age;
     char city[50];

       public:
     person(){
       cout << "Hello World!";
     }
};
int main(){
    person obj; 
}