 #include <iostream>
using namespace std;

int main () {
    int age = 23;
    int * pAge = &age;

cout << pAge << endl;
    cout <<  *pAge << endl;
    *pAge = 67;
    cout << age << endl;
   //Task 1: Pointer Basics

//Task 2: Pointer  Arithmetic Task

int arr [5] = {10, 20, 30, 40, 50};

int* pArr = arr;
for (int i = 0; i < 5; i++)
{
    cout << pArr << endl;
    cout << *pArr << endl;
    pArr++;
}
return 0;
}





// Created by jerry on 2/18/2026.
//