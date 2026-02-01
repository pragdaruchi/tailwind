#include<iostream>
using namespace std;
#include<string.h>
class Car{
    private:
    char Brandname[20];
     char color[50];
     int Year;
     int Prise;
     
     public:
     void setData()
     {
       cout << "Enter your Brandname : ";
       cin >> this-> Brandname;
       cout << "Enter your color : ";
       cin >> this->color;
       cout << "Enter your Year : ";
       cin >> this->Year;
       cout << "Enter your Prise : ";
       cin >> this->Prise;
     }
   void getData(){
    cout << " Brandname : " << this-> Brandname << endl;
    cout << " color : " << this->color << endl;
    cout << " Year : " << this->Year << endl;
    cout << " Prise : " << this->Prise << endl;
   }

};
int main(){
   Car car;
   car.setData();
   car.getData();
}