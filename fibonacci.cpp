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
    // make an array
    int fib[60];
    // first two terms are given
    fib[0] = 0;
    fib[1] = 1;
    // and all the following ones can be computed iteratively as
    for (int i = 2; i < 60; i++ ){
        fib[i] = fib[i-1] + fib[i-2];
    }
    for (int i = 0; i < 60; i++ ){
        cout << fib[i] << " ";
    }

    return 0; 


}
