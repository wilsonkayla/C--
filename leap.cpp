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

using namespace std; 

int main (){
    cout << "Enter year: ";
    int year;
    cin >> year;

    if ( year % 4 !=0){
        cout << "common year";
    }
    else if (year % 100 !=0){
        cout << "leap year";
    }
    else if(year % 400 !=0){
        cout << "common year";
    }
    else{
        cout << "leap year";
    }
    return 0;
}