// 4. WAP print bellow pattern.

//4 4 4 4 4 4 4
//4 3 3 3 3 3 4
//4 3 2 2 2 3 4 
//4 3 2 1 2 3 4 
//4 3 2 2 2 3 4
//4 3 3 3 3 3 4
//4 4 4 4 4 4 4

#include<iostream>
using namespace std;
int main(){

  int i,j;

  for(i=1;i<=7;i++){
    for(j=1;j<=7;j++){
      if(i==1 || i==7 || j==1 || j==7){
        cout << " 4 ";
      }else if(i==2 || i==6 || j==2 || j==6){
        cout << " 3 ";
      }else if(i==3 || i==5 || j==3 || j==5){
        cout << " 2 ";
      }else{
        cout << " 1 ";
      }
    }
    cout << endl;
  }

  return 0;
}
