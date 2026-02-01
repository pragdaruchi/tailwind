#include<iostream>
using namespace std;
#include<string.h>
class fan{
    private:
     char brand[50];
     char color[50];
     char speed[50];
     int prise;
     
     public:
     void setData()
     {
       cout << "Enter your brand : ";
       cin >> this->brand;
       cout << "Enter your color : ";
       cin >> this->color;
       cout << "Enter your speed : ";
       cin >> this->speed;
       cout << "Enter your prise : ";
       cin >> this->prise;
     }
   void getData(){
    cout << " brand : " << this->brand << endl;
    cout << " color : " << this->color << endl;
    cout << " speed : " << this->speed << endl;
    cout << " prise : " << this->prise << endl;
   }

};
int main(){
   cout << "Enter the number of fan : ";
   int num;
   cin >> num;
   fan obj[num];
   for (int i=0; i<num; i++)
   {
    obj[i].setData();
   }
   
   for (int i=0; i<num; i++)
   {
    obj[i].getData();
   }

}