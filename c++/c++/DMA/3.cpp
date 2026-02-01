#include<iostream>
using namespace std;

class dma{
   public:
     int size;
     int *arr = new int[size];

     dma(int size){
        this->size = size;
        if (arr == NULL)
        {
         cout << "Memoey allocation failed for array " << endl;
        }

        else{
          cout << "array is created!"<< endl;
        }  
     }

     void insert(int element , int index){
           arr[index] = element;
           cout << "Element added successfully on index :" << endl;
     }

     void element(int index){
          cout << "Element on index! "  <<  index  <<  "is "  <<  arr[index]  << endl;
     }

     ~dma(){
          delete[] arr;
          arr == NULL;
          if (arr == NULL)
          {
               cout << "Memoey deallocation Successful !"<< endl;
          }
          else
          {
               cout << "Memoey deallocation unSuccessful !" << endl;
          }
          
     }
};
int main(){
     dma obj(5); 
     obj.insert(25,0);
     obj.element(0);    
    
}