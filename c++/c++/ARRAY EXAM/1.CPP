#include<iostream>
using namespace std;
int main(){
    
    int num;
    cout << "Enter The Array Size:";
    cin >> num;
    int arr[num];
    for (int i=0; i<num; i++)
    {
       cout << "Enter Any Number:";
       cin >> arr[i];
    }
    cout << "Nagative Value:"<< endl;
    for (int i=0; i<num; i++)
    {
        if (arr[i] < 0)
        {
           cout << arr[i] << endl;
        }   
    } 
}