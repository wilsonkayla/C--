/*
Author: Kayla Wilson
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab1A

This file askes the user to put in a year
so so the user can find out if its a leap or common
year. In the program there are 2 of each.
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    int sum = 0;
    int count = 0;
    int num;

    while(cin >> num ){
        sum += num;
        count++;
    }

    cout << sum;

    return 0;



}