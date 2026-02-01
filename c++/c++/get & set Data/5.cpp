#include<iostream>
using namespace std;
#include<string.h>
class HotelRoom{

    private:
     int RoomNumber;
     char type[1];
     int Prise ;

   public:
    void setData(int RoomNumber,const char *type , int Prise){
      
      this->RoomNumber = RoomNumber;
      strcpy(this->type , type);
      this->Prise = Prise;
      
     
    }
    void getData(){
      cout << "Number : " << this->RoomNumber << endl; 
      cout << "type : " << this->type<< endl; 
      cout << "Prise : " << this->Prise<< endl; 
    }
     
};
int main(){
 HotelRoom one;
  one.setData(12, "AC", 1200 );
  one.getData();
}