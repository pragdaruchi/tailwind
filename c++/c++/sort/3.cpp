// #include<iostream>
// using namespace std;
// int main(){

//   //selection sort
//     int n;
//     cout << "Enter the number of element array : " ;
//     cin >> n;

//     int arr[n];
//     for (int  i=0; i<n; i++)
//     {
//        cout << "Enter the element : " ;
//        cin >> arr[i];
//        cout << endl;
//     }
      
//     for (int i=0; i<n-1; i++)
//     {
//       int minindex = i;
//       for (int  j=i+1; j<n; j++)
//       {
//        if (arr[j] < arr [minindex])
//        {
//          minindex = j;
//        }
//       }
//       int temp = arr[minindex];
//       arr[minindex] = arr[i];
//       arr[i] = temp;
      
      
//     }
    
//       for (int  a : arr)
//       {
//         cout << a << endl;
//       }
// } 

#include <iostream>
using namespace std;

int main() {
    int a[] = {1,2,3,4,5};
    int n = 5;
    int d = 1;  // kitni baar left rotate karna hai

for(int i = 0; i < d; i++) {
    int last = a[n-1];           // last element store
    for(int i=n-1; i > 0; i--) {
        a[i] = a[i-1];           // right shift
    }
    a[0] = last;                 // first me daal do
}


    // Print output
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
}