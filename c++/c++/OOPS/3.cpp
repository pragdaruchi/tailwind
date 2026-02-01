#include<iostream>
using namespace std;
#include<string.h>
class name{
    private:
     int id;
     char name[50];
     char city[50];
     char subject[10];
 

     public:
     void setData(int id, const char *name, const char*city , const char*subject)
     {
        this->id = id;
        strcpy(this->name, name);
        strcpy(this->city, city);
        strcpy(this->subject, subject);
     }
   void getData(){
    cout << " id is : " << this->id << endl;
    cout << " name : " << this->name << endl;
    cout << " city : " << this->city << endl;
    cout << " subject : " << this->subject << endl;
   }

};
int main(){
   name one;
   one.setData(1,"Ruchi","Rajkot","Maths");
   one.getData(); 
}

//10 class 