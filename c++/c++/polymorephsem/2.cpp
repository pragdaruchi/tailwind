#include<iostream>
using namespace std;
//method overridding
class shape{
  
    public:
    void draw(){
        cout << "Drawing a shape " << endl;
    }
};
class circle : public shape{
    public:
    void draw(){
        cout << "Drawing a circle " << endl;
    }
};

int main(){
    circle obj;
    obj.draw();
}   