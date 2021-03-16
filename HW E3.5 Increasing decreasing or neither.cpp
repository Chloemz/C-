//Name: Chloe Zambrano
//Email: Chloe.zambrano94@myhunter.cuny.edu
//CSCi 13500-01  HW E 3.5
//This Program reads reads three numbers and prints 
//“increasing” if they are in increasing order, “decreasing” 
//if they are in decreasing order, and “neither” other- wise. Here, 
//“increasing” means “strictly increasing”, with each value larger 
//than its predecessor. The sequence 3 4 4 would not be considered increasing.

#include<iostream>
#include<string>
using namespace std;
int main()
{
    int input1, input2, input3;
    
    cout <<"Please enter the first number: "<<endl;
    cin >> input1;
    cout <<"Please enter the second number: "<<endl;
    cin >> input2;
    cout <<"Please enter the third number: "<<endl;
    cin >> input3;


    if(input1 < input3 && input3 > input2 && input1 < input2)
    {
      cout << "increasing"<<endl;
    }
    else if (input1> input3 && input3 < input2 && input1 > input2)
    {
      cout << "decreasing"<<endl;
    }
    else 
    {
      cout << "neither"<<endl;
    }
    
    
  return 0;    
}