//Name: Chloe Zambrano
//Email: Chloe.zambrano94@myhunter.cuny.edu
//CSCi 13500-01  HW E 3.1
//This Program reads an integer and prints 
//whether it is negative, zero, or positive.

#include<iostream>
#include<string>
using namespace std;
int main()
{
    int input;
    
    cout <<"Please enter a number: "<<endl;
    cin >> input;

    if(0 < input)
    {
      cout << "The number is positive"<<endl;
    }
    else if (input < 0)
    {
      cout << "The number is negative"<<endl;
    }
    else 
    {
      cout << "The number is zero"<<endl;
    }
    
    
  return 0;    
}