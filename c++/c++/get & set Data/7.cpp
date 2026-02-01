#include<iostream>
using namespace std;
#include<string.h>
class order{
    private:
     int OrderId;
     char Customername[50];
     int TotalAmount;
     
     public:
     void setData()
     {
       cout << "Enter your OrderId : ";
       cin >> this->OrderId;
       cout << "Enter your CustomerName : ";
       cin >> this->Customername;
       cout << "Enter your Anount: ";
       cin >> this->TotalAmount;
     }
   void getData(){
    cout << " OrderId is : " << this->OrderId << endl;
    cout << " Customername : " << this->Customername << endl;
    cout << " age : " << this->TotalAmount << endl;
   }

};
int main(){
   order one;
   one.setData();
   one.getData();
}