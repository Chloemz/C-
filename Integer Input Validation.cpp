/*
Name: Chloe Zambrano

Input Validation.
This program asks the user to input an integer in the range 0 < n < 100. 
If the number is out of range, the program should keep asking to re-enter until a valid number is input.
After a valid value is obtained, print this number n squared.
*/

#include <iostream>   
using namespace std; 
int main()           
{
  int num; //Note: remember when to declare double vs int
  cout << "Please enter an integer: "<< endl;
  cin >> num;

  while (num < 1 || num > 99) //while loop works on all inputs less than 0 and greater than 100
  {
      cout <<"Please re-enter: "<< endl; //keeps asking until valid input is entered
      cin >> num; 
  }
 
  int Num_Squared = num * num;

  cout <<"Number squared is  "<<Num_Squared<<endl; 

  return 0; 
}
