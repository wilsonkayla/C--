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
    int gas;
    int fuel;
    double price;
    cout << "Enter number of gallons of gas in the tank: "<< endl;
    cin >> gas;
    cout << "Enter the fuel efficiency in miles per gallon: " << endl;
    cin >> fuel;
    cout << " Enter price of gas per gallon: " << endl;
    cin >> price;

    double mpg = (100.0 / fuel) * price;
    int distance = gas*fuel;
    cout << "Cost per 100 miles is $ "<< mpg << endl;
    cout << "The car can go " << distance << "miles with gas in the tank" << endl; 

    return 0;
}

