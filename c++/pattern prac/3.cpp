#include<iostream>
using namespace std;
int main(){

  for (int i=1; i<=5; i++)
  {
    for (int  k=1; k<=i; k++) 
    {
       cout << " ";
    }
    
    for (int  j=5; j>=i; j--)
    {
      if (j%2==0)
      {
        cout << 0;
      }
      else 
      {
        cout << 1 ;
      }
      
    }
    cout << endl;
  } 

  for (int  i=5; i>=1; i--)
  {
    for (int k=i; k<=5; k++)
    {
      cout << " ";
    }
    
    for (int  j=1; j<=i; j++)
    {

      if (j%2==0)
      {
      cout << 0 ;
      }
      else
      {
        cout << 1 ;
      }
      
    }
    cout << endl;
  }
}

//     C
// R   1 0 1 0 1    
//       1 0 1 0     
//         1 0 1     
//           1 0
//             1

