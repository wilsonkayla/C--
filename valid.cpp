/*
Author: Kayla Wilson
Course: CSCI-135
Instructor: Tong Yi
Assignment:Lab2A

Here, briefly, at least in one or a few sentences
describe what the program does.
*/

#include <iostream>
using namespace std;


int main (){
    cout << "Please enter an integer: "; 
    int num;
    cin >> num;
    while (num > 0 || num < 100){
    cout << "Please re-enter: ";
    cin >> num;
    }
        
    cout << "Number squared is: " << num*num << endl;

    return 0;

}