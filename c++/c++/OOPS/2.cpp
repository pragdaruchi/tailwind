#include<iostream>
using namespace std;
#include <string.h>
//gettype and settype
class person{
    private:
    int id;
    char name[50];
    int age;

    public:
    void setData(int id, const char *name, int age){
        this->id = id;
        this->age = age;
        strcpy(this->name, name);
    }
    void getData(){
        cout << "Id : " << this->id << endl;
        cout << "Name : " << this->name << endl;
        cout << "Age : " << this->age << endl;
    }
};
int main(){
person one;
person two;
one.setData(2, "Ruchi",25);
one.getData();
two.setData(4,"Khushi",35);
two.getData();
}