//Name: Chloe Zambrano
//Email: Chloe.zambrano94@myhunter.cuny.edu
//CSCi 13500-01 HW E.210 Cost Per Miles

#include <iostream>     //The built-in library for input/output
using namespace std; //The names of standard definitions
int main()           //C++ programs all have a main() function
//prompt user to enter an int from keyboard.
{
  double gall, fuel, price, dist, total; //defines numeric variables holding numbers with decimal pts   
  cout << "Enter a number of gallon: " << endl;
  cin >> gall;
  cout << "Enter fuel efficiency in miles per gallon: "<< endl;
  cin >> fuel;
  cout << "Enter price per gallon: "<< endl;
  cin >> price;

  dist = fuel * gall; //distance is miles per gallon
  total = (100/fuel) * price; //total cost per 100 miles

  cout << "Cost per 100 miles: " << total << endl; 
  cout << "Distance: " << dist << endl;

  return 0; //end function 
}