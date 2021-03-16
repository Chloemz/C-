//Name: Chloe Zambrano
//Email: Chloe.zambrano94@myhunter.cuny.edu
//CSCi 13500-01  Lab Quiz 03 Array Manipulation.cpp
//This Program initializes an array of numbers 1-10 and prints each number on a separate line
//Due to autograde need to initialize arrays in 2 parts: 
//1. Declare/set array capacity to 10
//2. Use a for-statement to initialize each element of the array.


#include <iostream>
using namespace std;
int main() 
{
    int num[10]; //declaration of a new array
    
    for(int i = 1; i <= 10; i++)
    {   
        num[i]=i;
        cout << num[i] << endl;
    }
 
   return 0;
}
