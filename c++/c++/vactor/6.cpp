#include<iostream>
using namespace std;
#include<vector>

int main(){
  vector <int> arr;
  vector <int> arrr(5,2);  
  //g++ -std=c++11 file.cpp
  vector <int> arrrr{12,24,36,48,60,72};
  
arrrr.erase(arrrr.begin()+2);

  for (int i=0; i<arrrr.size(); i++)
  {
      cout << arrrr[i] << endl;
  }

}