/*
Author: Kayla Wilson
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab1A

This files makes askes a user to print out a the smallest number. For example, is num 1 is smaller it 
will print out num1. This uses 3 numbers however, and that doing it it needs to be compared to the others 
to print out the smallest number.
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
    cout << "Enter the third number:";
    int num3;
    cin >> num3;

    if (num1 > num2 && num3 > num2){
        cout << "The smaller of the three is" << num2 << endl;
    }
    else if (num2 > num1 && num3 > num1){
        cout << "The smaller of the three is " << num1 << endl;
    }
    else{
        cout << num3;
    }

    return 0;
}