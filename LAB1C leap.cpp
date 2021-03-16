/*
Name: Chloe Zambrano
Email: Chloe.zambrano94@myhunter.cuny.edu
CSCi13500-01 
Professor Tong Yi
Lab1D: Month. 
This program asks the user to input the year and the month (1-12) 
and prints the number of days in that month (taking into account leap years). 
*/

#include <iostream>   //The built-in library for input/output
using namespace std; //The names of standard definitions
int main()           //C++ programs all have a main() function
{
  int year; //Note: remember difference between declaring double vs int
  cout << "Enter year: "<< endl;
  cin >> year;

    if (year%4!=0)
    {
      cout << "Common Year ";
    }
    else if (year%100!=0)
    {
      cout << "Leap Year ";
    }
    else if (year%400!=0)
    {
      cout << "Common Year ";
    }
    else
    {
      cout << "Leap Year ";
    }

  return 0; //end function 
}