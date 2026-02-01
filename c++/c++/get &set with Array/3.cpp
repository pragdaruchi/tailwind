#include<iostream>
using namespace std;
#include<string.h>

class table{
  private:
   char shape[20];
   char color[20];
   int height;
   int width;
   int prise;

   public:
   void setData(){
      cout << "Enter Any Shape : ";
      cin >>  this->shape;
      cout << "Enter Any Color : ";
      cin >>  this->color;
      cout << "Enter Any Height : ";
      cin >>  this->height;
      cout << "Enter Any Width : ";
      cin >>  this->width;
      cout << "Enter Any prise : ";
      cin >>  this->prise;
   }

   void getData(){
    cout << "Shape : " << this->shape << endl;
    cout << "color : " << this->color << endl;
    cout << "Height : " << this->height << endl;
    cout << "Width : " << this->width << endl;
    cout << "Prise : " << this->prise << endl;
   }
};
      
int main(){
    cout << "Enter the number of fan : ";
    int num;
    cin >> num;
    table obj[num];
    for (int i=0; i<num; i++)
    {
     obj[i].setData();
    }
    
    for (int i=0; i<num; i++)
    {
     obj[i].getData();
    }
 
}