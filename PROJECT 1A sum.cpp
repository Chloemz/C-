//Name: Chloe Zambrano
//Email: Chloe.zambrano94@myhunter.cuny.edu
//CSCi 13500-01  Project 1 A sum.cpp
//This Program reads a sequence of integers from cin, and reports their sum.

#include <iostream>     //The built-in library for input/output
using namespace std; //The names of standard definitions
int main()           //C++ programs all have a main() function
{
  int num;
  int sum = 0; //sets sum to 0
  while(cin >> num)
  {
    sum += num; //adds numbers
  }
  cout << sum << endl; //prints the sum
}
