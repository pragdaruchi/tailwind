   #include<iostream>
   using namespace std;

   //DMA
   class DMA{
      public:
      int size;
      int *arr = new int[size];

      DMA(int size){
      this->size = size;
      if (arr == NULL)
      {
         cout << "Memoey allocation failed for array " << endl;
      }
      else
      {
         cout << "Array is created !" << endl;
      }
      }

      void insert(int elements , int index){
      arr[index] = elements;
      cout << "Element added successfully on index :" << endl;
      }

      void getelement(int index)
      {
      cout << "Element on index! "  <<  index  <<  "is "  <<  arr[index]  << endl;
      }

      ~DMA()
      {
      delete[] arr;
      arr == NULL;
      if (arr == NULL)
      {
         cout << "Memoey deallocation Successful ! " << endl;
      }
      else
      {
         cout << "Memoey deallocation unsuccessful ! " << endl;
      }
   }
   };
   int main(){
   
      DMA obj(5); 
      obj.insert(25,0);
      obj.getelement(0);
   }