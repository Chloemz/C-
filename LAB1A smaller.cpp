/*
Name: Chloe Zambrano
Email: Chloe.zambrano94@myhunter.cuny.edu
CSCi13500-01 
Professor Tong Yi
Lab1A: Smaller of two integers. 
This program asks the user to input two integer numbers and prints out the smaller of the two.
*/

#include <iostream>   //The built-in library for input/output
using namespace std; //The names of standard definitions
int main()           //C++ programs all have a main() function
{
  int num1, num2; //Note: can also declare double when comparing #s
  cout << "Enter the first number: "<< endl;
  cin >> num1;
  cout << "Enter the second number: "<< endl;
  cin >> num2;

  if (num1 < num2) //If function to determine smaller value
  {
    cout << "The smaller of the two is " << num1 << endl;
  }
  else
  {  
    cout << "The smaller of the two is " << num2 << endl; 
  }
  return 0; //end function 
}