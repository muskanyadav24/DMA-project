// 3.Write a C++ program to dynamically create an object of a class using the new operator.

#include<iostream>
using namespace std;

class Student{
  public:
    string name;
    int std;
    char section;

    void setName(string name){
      this->name = name;
    }
    void setStd(int std){
      this->std = std;
    }
    void setSection(char section){
      this->section = section;
    }
    void display(){
      cout << "Student name :- " << this->name << endl;
      cout << "Student std :- " << this->std << endl;
      cout << "Student section :- " << this->section << endl;
    }
};

int main(){

  int total;

  cout << "Enter total student :- ";
  cin >> total;

  Student *s;

  s = new Student[total];

  for(int i=0;i<total;i++){
    string studentName;
    int studentStd;
    char studentSection;

    cout << "Enter Student name :- " ;
    cin >> studentName;

    s[i].setName(studentName);

    cout << "Enter Student std :- ";
    cin >> studentStd;

    s[i].setStd(studentStd);

    cout << "Enter Student section :- ";
    cin >> studentSection;

    s[i].setSection(studentSection);

    cout << "-------*-------" << endl;
    
  }

  cout << "Student Details." << endl << endl;

  for(int i=0;i<total;i++){
    s[i].display();
    cout << endl;
  }

  delete[] s;
  
  return 0;
}
