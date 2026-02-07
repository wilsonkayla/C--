/*
Author: Kayla Wilson
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab1A

This files makes askes a user to print out a the smallest number. For example, is num 1 is smaller it 
will print out num1.
*/

#include <iostream>

using namespace std;

int main(){
    cout << "Enter the first number: ";
    int num1;
    cin >> num1;
    cout << "Enter the second number: ";
    int num2;
    cin >> num2;

    if (num1 > num2){
        cout << "The smallesr is:" << num2 << endl;
    }
    else if (num2 > num1){
        cout << "The smaller number is:" << num1 << endl;
    }
    else{
        cout << num1; 
    }
    return 0;

}
