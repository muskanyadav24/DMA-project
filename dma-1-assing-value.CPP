// 1. Write a C++ program to dynamically allocate an integer, a character and a string and assign a value to them.

#include<iostream>
using namespace std;
int main(){

    string *name = new string;
    int *std = new int;
    char *section = new char;

    *name = "Kru";
    *std = 12;
    *section = 'A';

    cout << "String :- " << *name << endl;
    cout << "Integer :- " << *std << endl;
    cout << "Character :- " << *section << endl;

    delete name;
    delete std;
    delet section;

    return 0;
}
