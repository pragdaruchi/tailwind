#include<iostream>
using namespace std;

//DMA
int main(){
  int *arr = new int[5];
  delete[] arr;

  arr = NULL;
  if (arr == NULL)
  {
    cout << "Memory allocation is unsuccessfull!";
  }
  else{
    cout << "Memory allocation is successfull!";
  }
  
}