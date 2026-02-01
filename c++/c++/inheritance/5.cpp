#include<iostream>
using namespace std;
//hybrid
class person
{
 public:
 void per(){
    cout << "This is from person" << endl;
 }
};
class employe : public person{
    public:
    void em(){
        cout << "This is from employe"<< endl;
    }
};

class student : public person{
    public:
    void st(){
        cout << "This is from student"<< endl;
    }
};
class Parttimestudent : public employe , public student{
    public:
    void student(){
        cout << "This is from parttime"<< endl;
    }
};
int main(){
    Parttimestudent child;
    child.student::per();
    child.em();
    child.st();
    child.student();
} 