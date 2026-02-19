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
#include <fstream>
#include <cstdlib>
using namespace std; 

int main (){
    string line;
    getline(fin ,line);
    getline(cin,line);
    string name, time, guest;

    ifstream fin("participants.csv");
    if(fin.fail()){
        cerr << "The file cannon be opened."<< endl;
        exit(1);
    }

    
    int total= 0;
    
    while(){

        

    }











}