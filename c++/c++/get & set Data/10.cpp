#include<iostream>
using namespace std;
#include<string.h>
class WashingMashine{
    private:
     char brand[10];
     char color[50];
     int spinspeed;
     
     public:
     void setData()
     {
       cout << "Enter your brand : ";
       cin >> this->brand;
       cout << "Enter your color : ";
       cin >> this->color;
       cout << "Enter your spinspeed : ";
       cin >> this->spinspeed;
     }
   void getData(){
    cout << " brand  : " << this->brand << endl;
    cout << " name : " << this->color << endl;
    cout << " Balance : " << this->spinspeed << endl;
   }

};
int main(){
    WashingMashine Mashine;
   Mashine.setData();
   Mashine.getData();
}