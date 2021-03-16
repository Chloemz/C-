//Name: Chloe Zambrano
//Email: Chloe.zambrano94@myhunter.cuny.edu
//CSCi 13500-01 HW E1.7 Declare 3 String Variables

#include <iostream>     //The built-in library for input/output
using namespace std; //The names of standard definitions
int main()           //C++ programs all have a main() function
//prompt user to enter an int from keyboard.
{
  string name1, name2, name3; //declare string variables    
  cout << "Enter the first name: " << endl;
  cin >> name1;
  cout << "Enter the second name: "<< endl;
  cin >> name2;
  cout << "Enter the third name: "<< endl;
  cin >> name3;

  cout << name1 << endl; 
  cout << name2 << endl; 
  cout << name3 << endl; 

  return 0; //end function 
}