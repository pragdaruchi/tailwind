#include<iostream>
using namespace std;
int main(){
    int arr[3][5];
    for (int i=0; i<3; i++)
    {
       for (int j=0; j<5; j++)
       {
       cout << "ENter Any Number:";
       cin >> arr[i][j];
       }
    }
    for (int i=0; i<3; i++)
    {
       for (int j=0; j<5; j++)
       {
       cout << arr[i][j] << " ";
       }
     cout << endl;
    }
}