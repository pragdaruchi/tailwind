#include<iostream>
using namespace std;
#include<string.h>
class Bank{
    private:
     int AccountNumber;
     char AccountHolderName[50];
     int Balance;
     
     public:
     void setData()
     {
       cout << "Enter your AccountNumber : ";
       cin >> this->AccountNumber;
       cout << "Enter your AccountHolderName : ";
       cin >> this->AccountHolderName;
       cout << "Enter your Balance : ";
       cin >> this->Balance;
     }
   void getData(){
    cout << "AccountNumber  : " << this->AccountNumber << endl;
    cout << " name : " << this->AccountHolderName << endl;
    cout << " Balance : " << this->Balance << endl;
   }

};
int main(){
   Bank one;
   one.setData();
   one.getData();
}