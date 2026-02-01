#include<iostream>
using namespace std;
int main(){
    int arr[2][5];
    for (int i=0; i<2; i++)
    {
       for (int  j=0; j<5; j++)
       {
       cout << "Enter any number:";
       cin >> arr[i][j];
       }
    }
    for (int i=0; i<2; i++)
    {
       for (int  j=0; j<5; j++)
       {
       cout << arr[i][j] << " ";
       }
       cout << endl;
    }
}