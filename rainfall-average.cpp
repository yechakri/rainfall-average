// This program calculates the average rainfall for three months

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
     // Variables 
    string month1,    // First month
           month2,    // Second month
           month3;    // Third month
    double rain1,     // Amount of rain for the first month 
           rain2,     // Amount of rain for the second month 
           rain3,     // Amount of rain for the third month 
           average;   // Average rainfall

    // Set the desired outpout formatting for numbers
    cout << setprecision(2) << fixed << showpoint;
     
    // Get the names of three months and the amount 
    // of rain that feel each month
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
    
    // Calculate the average rainfall of the three months
    average = (rain1 + rain2 + rain3)/3.0;

    // Display calculated data
    cout << "The average rainfall for " << month1 << ", " << month2 
         << ", and " << month3 << " is " << average << " inches\n";

    return 0;
}
