#include<iostream>
using namespace std;
#include<string.h>
class name{
    private:
     int id;
     char name[50];
     int age;
     public:
     void setData()
     {
       cout << "Enter your id : ";
       cin >> this->id;
       cout << "Enter your Name : ";
       cin >> this->name;
       cout << "Enter your Age : ";
       cin >> this->age;
     }
   void getData(){
    cout << " id is : " << this->id << endl;
    cout << " name : " << this->name << endl;
    cout << " age : " << this->age << endl;
   }

};
int main(){
   name one;
   name two;
   one.setData();
   one.getData();
   two.setData();
   two.getData(); 
}
