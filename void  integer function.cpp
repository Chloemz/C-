//Name: Chloe Zambrano

//This Program swaps the values of a and b if a is greater than b 
//and otherwise leaves a and b unchanged.
// void sort2(int& a, int& b)


#include <iostream>   
#include <algorithm> 
using namespace std; 
 
void sort2(int &a, int &b) 
{
  
 if(a>b)
   {
       std::swap(a, b);
       
   }
   else
   {
       a= a;
       b= b;
   }
 
} 
 int main()  
 {
 int a, b; //Note: remember when to declare double vs int
 cout << "Please enter the first integer: "<< endl;
 cin >> a;
 cout << "Please enter the second integer: "<< endl;
 cin >> b;
 sort2(a, b);
 
 cout<< a<<", "<<b;
 return 0; 
 }
 
