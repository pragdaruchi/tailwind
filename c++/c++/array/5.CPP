#include<iostream>
using namespace std;
int main(){
    //    int arr[3][3] ={{12,13,14},
    //                    {15,16,17},
    //                    {18,19,20}};
    
    // int arr[3][3];
    // for (int i=0; i<3; i++)
    // {
    //    for (int j=0; j<3; j++)
    //    {
    //     cout << "Enter Value :";
    //     cin >> arr[i][j];
    //    }  
    // }
    // for (int i=0; i<3; i++)
    // {
    //     for (int  j=0; j<3; j++)
    //     {
    //          cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
 
    // int arr[3][4];
    // for (int i=0; i<3; i++)
    // {
    //     for (int  j=0; j<4; j++)
    //     {
    //        cout << "Enter value:";
    //        cin >> arr[i][j];
    //     }
      
    // }
    // for (int i=0; i<3; i++)
    // {
    //     for (int  j=0; j<4; j++)
    //     {
    //          cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    int arr[4][2];
    for (int i=0; i<4; i++)
    {
       
        for (int j=0; j<2; j++)
        {
            cout << "Enter Value:";
            cin >> arr[i][j];
        }
    }
    for (int i=0; i<4; i++)
    {
       
        for (int j=0; j<2; j++)
        {
             cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
}

