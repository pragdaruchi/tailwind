#include<iostream>
using  namespace std;
#include<string.h>
class person{
//perametarlized
    private:
     char name[50];
     int age;
     char city[50];

       public:
     person(const char *name, int age , const char *city){
       strcpy(this->name , name);
       this->age = age;
       strcpy(this->city , city);
     }
     void getData(){
        cout << this->name<< endl;
        cout << this->age<< endl;
        cout << this->city<< endl;
     }
};
int main(){
    person obj("Ruchi" , 20 ,"Rajkot"); 
    obj.getData();

    return 0 ;
}