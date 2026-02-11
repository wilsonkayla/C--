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
    cout << "Please enter L: "<< endl;
    int L;
    cin >> L;
    cout << "Please enter U: " << endl;
    int U;
    cin >> U;
    for(int i = L; i < U; i++) {
        cout << i << endl;
    // the body of the loop will get executed for 
    // all values of i starting at L
    // and ending at the largest integer less than U

}
return 0; 



}