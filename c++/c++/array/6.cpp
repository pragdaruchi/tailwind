#include<iostream>
using namespace std;
int main(){
    int row;
    cout << "enter any elements row:";
    cin >> row;

    int column;
    cout << "enter any elements column:";
    cin >> column;

    int arr[row][column];
    for (int i=0; i<row; i++)
    {
      for (int j=0; j<column; j++)
      {
         cout << "Enter any elements:";
         cin >> arr[i][j];
      }
    }
   int sum = 0;
   int num=row*column;
    for (int i=0; i<row; i++)
    {
      for (int j=0; j<column; j++)
      {
         sum+=arr[i][j];
      }
    }     
    cout << "sum of all elements :"<< sum << endl;
    cout  << "Average of all elemente:" << sum/num ;
    cout << endl << endl;

    int rowsum = 0;
    int rows;
    cout << "enter the row number to do sum :";
    cin >> rows;

    for (int j=0; j<column; j++)
      {
         rowsum+=arr[rows][j];
      }   
      cout << "sum of rows " << rowsum; 
}