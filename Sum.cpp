//Name: Chloe Zambrano

//This Program reads a sequence of integers from cin, and reports their sum.

#include <iostream>     
using namespace std; 
int main()           
{
  int num;
  int sum = 0; //sets sum to 0
  while(cin >> num)
  {
    sum += num; //adds numbers
  }
  cout << sum << endl; //prints the sum
}
