#include<iostream>
using namespace std;
int main(){
          
    int num;
    cout << "Enter the array size:";
    cin >> num;
     int arr[num];
    for (int i=0; i<num; i++)
    {
        cout << "Enter any number:";
        cin >> arr[i];
    }
    cout << "Nagative value:" << endl;
    for (int i=0; i<num; i++)
    {
        if (arr[i] < 0)
        {
           cout << arr[i] << endl;
        }   
    }
}