#include<iostream>
using namespace std;
int main(){
    int row;
    cout << "Enter Any Row Size:";
    cin >> row;

    int column;
    cout << "Enter Any Column Size:";
    cin >> column;
    
    int arr[row][column];
    for (int i=0; i<row; i++)
    {
      for (int j=0; j<column; j++)
      {
       cout << "Enter any number:" ;
       cin >> arr[i][j];
      }
    }
    for (int i=0; i<row; i++)
    {
      for (int j=0; j<column; j++)
      {
         cout << arr[i][j] << " ";
      }
      cout << endl;
    }
    int max = arr[0][0];
    for (int i=0; i<row; i++)
    {
       for (int j=0; j<column; j++)
       {
         if (arr[i][j] > max)
         {
            max = arr[i][j];
         }
       }     
    }
    cout << "largest number is : " << max <<endl ; 
    
}