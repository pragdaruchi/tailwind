#include<iostream>
using namespace std;
#include<string.h>
class student{
    private:
     char number[20];
     char name[50];
     char grade[10];
 

     public:
     void setData(const char *number ,const char *name  , const char*grade)
     {
         strcpy(this->number, number);
         strcpy(this->name, name);
        strcpy(this->grade, grade);
     }
   void getData(){
    cout << " number : " << this->number << endl;
    cout << " name : " << this->name << endl;
    cout << " Grade : " << this->grade << endl;
   }

};
int main(){
   student one;
   one.setData("10", "Ruchi" , "A");
   one.getData(); 
} 