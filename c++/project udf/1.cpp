#include<iostream>
using namespace std;
void add(int a , int b){
    int sum = a + b;
    cout << sum << endl;
};
void substration(int a , int b){
    int sum = a - b;
    cout << sum << endl;
};
void multi(int a , int b){
    int sum = a * b;
    cout << sum << endl;
};
void divide(int a , int b){
    int sum = a / b;
    cout << sum << endl;
};
void modul(int a , int b){
    int sum = a % b;
    cout << sum << endl;
};
void  calculator(){

    int  num;
    while (num != 0)
    {
        cout << "press 1 for +" << endl;
        cout << "press 2 for -" << endl;
        cout << "press 3 for *" << endl;
        cout << "press 4 for /" << endl;
        cout << "press 5 for %" << endl;
        cout << "press 0 for exit" << endl;
    
        cout << "Enter Your num : ";
        cin >> num;

       if (num != 0)
       {
        int a;
        cout << "Enter The First Number : ";
        cin >> a;
        
        int b;
        cout << "Enter The Second Number :";
        cin >> b;
       
        switch (num)
        {
        case 1:
           add(a , b);
            break;
    
            case 2:
           substration ( a,b);
            break;
    
            case 3:
            multi(a,b);
            break;
    
            case 4:
           divide( a,b);
            break;
    
            case 5:
            modul(a,b);
            break;

        default:         
            cout << "invalid" << endl;
            break;
        }  
       }

       else
       {
        cout << "exit";
       }    
    }
};

int main(){
    calculator();
}