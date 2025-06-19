#include<iostream>
using namespace std;
int main(){

  int *intArray = new int [3] {1,2,3};
  string *strArray = new string [3] {"Kru","Keyu","Anju"};

  cout << "Integer array :- ";
    
    for(int i=0;i<3;i++){
      cout << intArray[i] << " , ";
    }
    cout << endl;
  
    cout << "String array :- ";

    for(int j=0;j<3;j++){
      cout << strArray[j] << " , ";
    }

    delete[] intArray;
    delete[] strArray;
  
  return 0;
}
