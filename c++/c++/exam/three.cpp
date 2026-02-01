#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter any dight:";
    cin >> num ;
    int lastDight = num % 10;
    int FirstDight;
    while (num >=10)
    {
     num =num /10;
     FirstDight = num;
    }
    int sum = lastDight + FirstDight;
    cout  << "Sum of first and last dight: " << sum << endl; 
}
