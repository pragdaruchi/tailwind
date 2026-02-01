#include<iostream>
using namespace std;
int main(){
    int a;
    cout << "Enter a score out of 100:";
    cin >> a;
    char grade;
    if (a>=90) 
    {
        cout << "Grade A" << endl;
        grade='a';
    }
    else if (a>=80)
    {
        cout << "Grade B" << endl;
        grade='a';

    }
    else if (a>=70)
    {
        cout << "Grade C" << endl;
        grade='b';

    }
    else if (a>=60)
    {
        cout << "Grade D" << endl;
        grade='c';

    }
    else if (a>=50)
    {
        cout << "Grade E" << endl;
        grade='d';

    }
    else if (a>=40)
    {
        cout << "Grade F" << endl;
        grade='e';

    }
    
    else {
        cout  << "Fail";
    }
    switch (grade)
    {
    case 'a':
       cout << "a" << endl;
        break;
        case 'b':
        cout << "B";
         break;
         case 'c':
         cout << "c";
          break;
          case 'd':
          cout << "d";
           break;
           case 'e':
           cout << "e";
            break;
            case 'f':
            cout << "f";
             break;
    default:
    cout << "fail";
        break;
    }
}