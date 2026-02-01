#include<iostream>
using namespace std;
// class templete

template <typename T1 , typename T2, typename T3>
class person{
    
    T1 id;
    T1 age;
    T2 interest;
    T3 name[30];

    void setData(T1 id , T1 age , T2 interest, const char *name ){
       this-> id = id;
       this-> age = age;
       this-> interest = interest;
       strcpy(this->name , name);
    }
    void getData(){
       cout << "ID is : " <<  this-> id = id; << endl;
       cout << "age is : " <<  this-> age = age << endl;
       cout << "interest is : " << this-> interest = interest << endl;
       cout << "name is : " <<this-> name = name;  
    }
};
int main(){}