/////////////////////////////////////////////////////////////////////
//
// Name: Ashley Villela
// Date: 9/1/26
// Class: 1470.04
// Semester: Fall 2026
// CSCI 1470 Instructor: Dr. Reyes
//
// Program Description: Converting Celsius to Fahrenheit//
/////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int main()
{
    double fahrenheit, celsius;
    
    cout << "Enter an integer value representing the temperature in Celsius: ";
    cin >> celsius;
    
    fahrenheit = ((9. / 5.) * celsius) + 32;
    
    cout << celsius << " Celsius is equal to " << fahrenheit << " Fahrenheit.";
    
    
    
    return 0;
}
