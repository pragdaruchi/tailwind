#include<iostream>
using namespace std;
int main(){
    int sum = 0;
    int arr[5] = {1 , 2, 3 , 4 , 5};
    for ( int a : arr )
    {
        sum = sum + a;
    }
    cout << sum/5 << endl;
   
    // int arr[5] = {1 , 2 , 3 , 4 ,5};
    // int arr2[5] = {1 , 2 , 3 , 4 ,5};
    // int arr3[5];
    // for (int i=0; i<=4; i++)
    // {
    //  arr3[i] = arr[i] + arr2[i];
    // }
    // for(int a: arr3)
    // {
    //     cout << a <<endl;
    // }
    
//     int arr[5] = {2001 , 2002 , 2003, 2004, 2005 };
//     for (int a : arr)
//     {
//         if (a%4==0 && a%100!=0 || a%400==0 )
//     {
//        cout << a;
//     }
// }
}
