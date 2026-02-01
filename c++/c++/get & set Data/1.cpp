#include<iostream>
using namespace std;
#include<string.h>
class bus{

    private:
     int Number;
     char route[10];
     char Drivername[0];

   public:
    void setData(int Number, const char *route  , const char *Drivername)
    {
      this->Number = Number;
      strcpy(this->route , route);
      strcpy(this->Drivername ,Drivername);
    }
    void getData(){
      cout << "Number : " << this->Number << endl; 
      cout << "Route : " << this->route << endl; 
      cout << "Drivername : " << this->Drivername << endl; 
    }
     
};
int main(){
 bus one;
  one.setData(1255,"Rajkot","Mohan");
  one.getData();
}