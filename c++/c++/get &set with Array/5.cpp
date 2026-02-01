#include<iostream>
using namespace std;
#include<string.h>

class car {
  private:
  char Brandname[20];
  char color[50];
  int Year;
  int Prise;
  
   

   public:
   void setData(){
      cout << "Enter Any Brandname : ";
      cin >>  this-> Brandname;
      cout << "Enter Any Color : ";
      cin >>  this->color;
      cout << "Enter Any year : ";
      cin >>  this->Year;
      cout << "Enter Any Prise : ";
      cin >>  this->Prise;
   }


   void getData(){
    cout << " Brandname: " << this-> Brandname << endl;
    cout << "color : " << this->color << endl;
    cout << "Year : " << this->Year << endl;
    cout << "Prise : " << this->Prise << endl;
   }
};
      
int main(){
    cout << "Enter the number of car : ";
    int num1;
    cin >> num1;
   car obj[num1];
    for (int i=0; i<    num1; i++)
    {
     obj[i].setData();
    }
    
    for (int i=0; i<num1; i++)
    {
     obj[i].getData();
    }
 
}