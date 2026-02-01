#include<iostream>
using namespace std;
#include<string.h>
class book{

    private:
    char title[10];
    char Author[20];
    int page;
    int prise;
   

   public:
    void setData( const char *title, const char *Author  , int page, int prise){
      
      strcpy(this->title , title);
      strcpy(this->Author , Author);
      this->page = page;
      this->prise = prise;

    }
    void getData(){
      cout << "Title : " << this->title << endl; 
      cout << "Author: " << this->Author << endl; 
      cout << "Page: " << this->page << endl; 
      cout << "prise: " << this->prise << endl; 
    }
     
};
int main(){
 book one;
  one.setData("The Book" , "Ruchi", 250 , 120);
  one.getData();
}