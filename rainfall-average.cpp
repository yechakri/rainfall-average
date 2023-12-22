// This program calculates the average rainfall for three months

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
      // Variables 
    string month1, month2, month3;    
    double rain1, rain2, rain3, average;   

    cout << "Please enter the name of the first month: ";
    getline(cin, month1);
    cout << "The amount of rain that fell in " << month1 << " (in inches): ";
    cin >> rain1;
    cin.ignore();

    cout << "The name of the second month: ";
    getline(cin, month2);
    cout << "The amount of rain that fell in " << month2 << " (in inches): ";
    cin >> rain2;
    cin.ignore();

    cout << "The name of the third month: ";
    getline(cin, month3);
    cout << "The amount of rain that fell in " << month3 << " (in inches): ";
    cin >> rain3;
    cin.ignore();


    return 0;
}
