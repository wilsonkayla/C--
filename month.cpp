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
    cout << "Enter month: ";
    int month;
    cin >> month;
    int days;

    if (month == 2){
        if ((year %4 == 0 && year % 100 != 0) || (year % 400 == 0)){
            days = 29;
        }
        else{
            days = 28;
        }
        
    }
    else if (month ==4 || month == 6 || month == 9 || month ==11 ){
        days= 30;
    }
    else{
        days= 31;
    }
    cout << days << "days"<< endl;



    return 0;
}