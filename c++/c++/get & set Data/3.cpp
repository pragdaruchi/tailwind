#include<iostream>
using namespace std;
#include<string.h>
class bottle{

    private:
     int prise;
     char color[10];
     char material[20];
     char capacity[30];

   public:
    void setData(int prise, const char *color, const char *material  , const char *capacity){
      
      this->prise = prise;
      strcpy(this->color , color);
      strcpy(this->material , material);
      strcpy(this->capacity ,capacity);
    }
    void getData(){
      cout << "Prise : " << this->prise << endl; 
      cout << "Color: " << this->color << endl; 
      cout << "Material: " << this->material << endl; 
      cout << "Capacity: " << this->capacity << endl; 
    }
     
};
int main(){
 bottle one;
  one.setData(250,"Pink", "Still","ml");
  one.getData();
}