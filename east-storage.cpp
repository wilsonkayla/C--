/*
Author: Kayla Wilson
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab1A

This files makes askes a user to print out a the smallest number. For example, is num 1 is smaller it 
will print out num1.
*/

#include <fstream>
#include <cstdlib>
#include <climits>
#include <iostream>
using namespace std;


/*
int main(){

    cout << "Enter a date: ";
    string date;
    cin >> date;
    string file;
    string storage;

    ifstream fin("Current_Reservoir_Levels.tsv");

    if (fin.fail()){
        cerr << "File cannot be opened to reading." << endl;
        exit(1);
    }
    fin.ignore(INT_MAX, '\n'); 

    string junk;        // new string variable
    getline(fin, junk);

    string eastSt, eastE1, westSt,westE1; 

    while(fin >> date >> eastSt >> eastE1 >> westSt >> westE1){

        cout << date << " " << eastSt << endl;

    }

    fin.close();

    while(fin >> date >> storage ){

        if( date == date){
            cout << "East basin storage: " << storage << "billion gallons" << endl;


        }
    }
    return 0;

    
}
*/

int main(){
    string junk;
    string user_date;
    string file_date;
    double eastSt, eastE1 , westSt , westE1;

    cout << "Enter a date in MM/DD/YYYY format" << endl;
    cin >> user_date;

    ifstream fin("Current_Reservoir_Levels.tsv");

    if (fin.fail()){
        cerr << "File cannot be opened to reading." << endl;
        exit(1);
    }

    getline(fin, junk);


    while(fin >> file_date >> eastSt >> eastE1 >> westSt >> westE1){
         fin.ignore(INT_MAX, '\n'); 
         if( file_date == user_date){
            cout << file_date << "East basin storage: " << eastE1 << " " << eastSt <<  "billion gallons" << endl;
            break;


        }
    }
    return 0;
        


}