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
    int myData[10];

    for(  int data= 0; data<10;  data++){
        myData[data]= 1;
    }
    int i;
    int v;
    do{
        for ( int p = 0; p <10; p++){
            cout << myData[p] << " ";

        }

        cout << "Input index: "<< endl;
        cin >> i;
        cout << " Input value: "<< endl;
        cin >> v;
        if( i >= 0 && i < 10){
            myData[i]= v;
        

        }
    } 
    while(i >= 0 && i < 10);

    return 0;


}