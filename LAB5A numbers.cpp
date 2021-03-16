//Name: Chloe Zambrano
//Email: Chloe.zambrano94@myhunter.cuny.edu
//CSCi 13500-01  LAB 5A numbers.cpp
//Instructor: Tong Yi
//This Program defines a bool function "bool isDivisibleBy(int n, int d);"
// If n is divisible by d, the function should return true, otherwise return false

#include <iostream>
using namespace std;
//creating a function prototype
bool isDivisibleBy(int n, int d)
{
    if(d == 0)
    {
        return false;
    }
    if(n%d == 0)
    {
        return true;
    }
    
    return false; //don't need else in an if statement, return does the same thing
}
   int main()
   {
      string value;
      int n, d;
      cout << "Please enter two integers: "<< endl;
      cin >> n >> d;
      
      if(d== 0) //same reiteration as bool funct above
      {
        cout<<"Can't divide by 0, try again"<<endl;  
      }
      if(n%d == 0)
      {
        cout<<"True";  
      }
      else
      {
          cout<<"False";
      }

      return 0;
    }
