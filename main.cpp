//Author: Mohsin Mohammad
//Description: Sum all of the passing border. If I understand the problem correctly,
//Reading all of the input (Value) file and display the total sum
// Also, display average.
//I didn't be able to solve this problem due to not understanding the questions. But, based on my assumptions.
//Date: November 11, 2019

#include <iostream>
#include <fstream>
#include <iomanip>


using namespace std;

int main() {
    int sum = 0;
    int Value = 0;
    int Average = 0;
    int Arr = 0;
    ifstream inFile;

    inFile.open("Border_Crossing_Entry_ValueData.txt");
    ofstream myfile ("Average.txt");

    if (!inFile) {
        cout << "Unable to open file";
        return 0;
        //exit(1); // terminate with error
    }

    while (inFile >> Value) {
        sum = sum + Value;
    }

    inFile.close();

    cout << "Sum = " << sum << endl;

    if (myfile.is_open()) {
        for(int i = 0; i < 7; i++){               //I can also use Switch/case statement for each date and then average them.
               // if('Date' == 2){
                  //Average == 0;   //testing
           // myfile << " " << " " << " " << " " << Average << endl;
                }

                myfile.close();
        }

    else cout << "Unable to open file";

    return 0;
}
