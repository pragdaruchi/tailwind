#include<iostream>
using namespace std;
#include<vector>

int main(){
 vector <int> arr;
 int choice;

 do
 {
    cout << "Welcome to Array program !" << endl << endl ;

    cout << "Press 1 TO Add An element In Array : " << endl;
    cout << "Press 2 TO Print All element of Array : " << endl;
    cout << "Press 3 TO Delete element of Array : " << endl;
    cout << "Press 4 TO Update element of Array : " << endl;
    cout << "Press 0 To Exit The Program :" << endl;

    cin >> choice;
    if (choice == 1)
    {
        int element;
        cout << "Enter the element : ";
        cin >> element;
        arr.push_back(element);
       
        cout << "Element Added successfully : " << endl;
    }

    else if(choice == 2)
    {
        if (arr.size() ==0)
        {
           cout << "Arrar is empty ! " << endl;
        }
        else
        {
            cout << "Here is the list of element :" << endl;
        }
    //   cout << "Here is the list of element"  << endl;
      for (int a : arr)
      {
        cout << a << endl;
      }
      cout << endl;
    }
    

    else if (choice == 3)
    {
        int index;
        cout << "Enter the  index to remove the element : " << endl;
        cin >> index;

        if (index<arr.size())
        {
          arr.erase(arr.begin()+ index);
          cout << "Element deleted successfully !" << endl;
        }

        else 
         {
            cout << "Your index is not valid" << endl;
        } 
    }
    
    else if (choice == 4)
    {
        int index, value;
        cout << "Enter the  index : " << endl;
        cin >> index;
        cout << "Enter the  value : " << endl;
        cin >> value;

        arr[index] = value;
    }
     
    else if (choice == 0)
    {
      cout << "Not Valid" << endl << endl;
    }
 } while (choice > 0);
}