#include<iostream>
using namespace std;
#include<string.h>
class name{
    private:
     int id;
     char name[50];
     char subject[50];
     char city[50];
     char gender[50];
     
     public:
     void setData()
     {
       cout << "Enter your id : ";
       cin >> this->id;
       cout << "Enter your Name : ";
       cin >> this->name;
       cout << "Enter your subject : ";
       cin >> this->subject;
       cout << "Enter your city : ";
       cin >> this->city;
       cout << "Enter your gender : ";
       cin >> this->gender;
     }
   void getData(){
    cout << " id is : " << this->id << endl;
    cout << " name : " << this->name << endl;
    cout << " subject : " << this->subject << endl;
    cout << " city : " << this->city << endl;
    cout << " gender : " << this->gender << endl;
   }

};
int main(){
   name one[3];
   one[0].setData();
   one[1].setData();
   one[2].setData();
   one[0].getData();
   one[1].getData();
   one[2].getData();
}
