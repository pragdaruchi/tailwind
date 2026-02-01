#include<iostream>
using namespace std;
#include<string.h>
class bus{
  private:
    int busnumber;
    char busname[50];
    char busroute[20];

    public:
    void setData(int busnumber  , const char *busname , const char *busroute )
    {
         this->busnumber =  busnumber;
        strcpy(this->busname, busname);
       strcpy(this->busroute, busroute);
    }

    void getData(){
      cout << "busnumber is : " << this->busnumber << endl;
      cout << "busname is : " << this->busname << endl;
      cout << "busroute is : " << this->busroute << endl;
    }

};
int main(){
bus obj;
obj.setData(3024 , "Mansi" , "Rajkot-surat");
obj.getData();
}
