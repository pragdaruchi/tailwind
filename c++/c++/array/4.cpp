#include<iostream>
using namespace std;
int main(){
   int size;
   cout << "Enter array of number:";
   cin >> size;
   int arr[size];
   for (int i=0; i<size; i++)
   {
     cout << "Enter num of " << i << ":" << endl;
     cin >> arr[i]; 
   }
   for (int a: arr)
   {
   cout << a << " ";
   }
   cout << endl << endl;
   
 int index;
 cout << "enter in the index num of delete:";
 cin >> index;
 for (int i=0; i<size; i++)
 {
    if (i == index)
    {
      arr[i]=0;
    }
 }
 cout << "Array after deletations:";
 for (int a: arr)
   {
   cout << a << " ";
   }
   cout << endl << endl;

   int index1;
   cout << "enter in the index num of updatations:";
   cin >> index1;
   for (int i=0; i<size; i++)
   {
      if (i == index1)
      {
       cout << "Enter the value update:";
       cin >> arr[i];
      }
   }
   cout << "Array after updatations:";
   for (int a: arr)
     {
     cout << a << " ";
     }
     cout << endl << endl;
}
   