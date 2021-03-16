/*
Name: Chloe Zambrano
Email: Chloe.zambrano94@myhunter.cuny.edu
CSCi13500-01 
Professor Tong Yi
Lab1D: Month. 
This program asks the user to input the year and the month (1-12) 
and prints the number of days in that month. (taking into account leap years).
*/

#include <iostream>   //The built-in library for input/output
using namespace std; //The names of standard definitions
int main()           //C++ programs all have a main() function
{
  int year, month; //Note: declare double when comparing #s
  cout << "Enter year: "<< endl;
  cin >> year;
  cout << "Enter month: "<< endl;
  cin >> month;

    if (month == 1 or month == 3 or month == 5 or month == 7 or month == 8 or month == 10 or month == 12) //If function to determine value
    {
        cout << "31 days ";
    }
    else if (month == 4 or month == 6 or month == 9 or month == 11)
    {
        cout << "30 days ";
    }
    else
    {
      if (year%4!=0)
      {
        cout << "28 days ";
      }
      else if (year%100!=0)
      {
        cout << "29 days ";
      }
      else if (year%400!=0)
      {
          cout << "28 days ";
      }
      else
      {
          cout << "29 days ";
      }
    }

  return 0; //end function 
}