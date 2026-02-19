

#include <iostream>
#include <fstream>
#include <cstdlib>
 using namespace std;

 int main(){
    ifstream fin("Current_Reservoir_Levels.tsv");

    if (fin.fail()){
        cerr << "File cannot be opened to reading." << endl;
        exit(1);
    }
    fin.ignore(INT_MAX, '\n'); 

    string junk;        // new string variable
    getline(fin, junk);

    string junk, date, eastSt, eastE1, westSt,westE1; 

    while(fin >> date >> eastSt >> eastE1 >> westSt >> westE1){

        cout << date << " " << eastSt << endl;

    }

    fin.close();

 }