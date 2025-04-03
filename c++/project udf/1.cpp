#include<iostream>
using namespace std;
void  calculator(){
    int  num;

    while (num != 0)
    {
        cout << "pr`ess 1 for +" << endl;
        cout << "press 2 for -" << endl;
        cout << "press 3 for *" << endl;
        cout << "press 4 for /" << endl;
        cout << "press 5 for %" << endl;
        cout << "press 0 for exit" << endl;
    
        cout << "Enter Your Choice : ";
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
            cout << a + b << endl;
            break;
    
            case 2:
            cout << a - b << endl;
            break;
    
            case 3:
            cout << a * b << endl;
            break;
    
            case 4:
            cout << a / b << endl;
            break;
    
            case 5:
            cout << a % b << endl;
            break;

        default:         
            cout << "invalid";
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