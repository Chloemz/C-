//Name: Chloe Zambrano

//Calculates Cost Per Milegiven the three inputs: #gallons, fuel efficiency, pp gallon.

#include <iostream>     
using namespace std; 
int main()           
//prompt user to enter an int from keyboard.
{
  double gall, fuel, price, dist, total; //double for numeric variables with decimal pts   
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
