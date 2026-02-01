#include<iostream>
using namespace std;
#include<string.h>

class shoes{
  private:
   char brand[20];
   char color[20];
   int size;
   

   public:
   void setData(){
      cout << "Enter Any  brand : ";
      cin >>  this-> brand;
      cout << "Enter Any Color : ";
      cin >>  this->color;
      cout << "Enter Any size : ";
      cin >>  this->size;
   }

   void getData(){
    cout << " brand: " << this-> brand << endl;
    cout << "color : " << this->color << endl;
    cout << "Height : " << this->size << endl;
   }
};
      
int main(){
    cout << "Enter the number of Shoes : ";
    int num1;
    cin >> num1;
    shoes obj[num1];  
    for (int i=0; i<    num1; i++)
    {
     obj[i].setData();
    }
    
    for (int i=0; i<num1; i++)
    {
     obj[i].getData();
    }
 
}