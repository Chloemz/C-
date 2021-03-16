/*
Name: Chloe Zambrano
Email: Chloe.zambrano94@myhunter.cuny.edu
CSCi13500-01 
Professor Tong Yi
Lab2D: Fibonacci Sequence.
This program uses an array of integers to 
print the first 60 Fibonacci number sequence,
i.e all Fibonacci numbers from F(0) to F(59).
*/

#include <iostream>   //The built-in library for input/output
using namespace std; //The names of standard definitions
int main()           //C++ programs all have a main() function
{
    // make an array
    int fib[60];
    // first two terms are given
    fib[0] = 0;
    fib[1] = 1;
    //Print 1st 2 of the Fibonacci sequence
    cout << fib[0] << endl << fib[1] << endl;

    //Create for loop to print 60 Fibonacci number sequence
    for(int i= 2; i < 60; i++)
    {
        // All the following Fib Numbers can be computed iteratively as
        fib[i] = fib[i-1] + fib[i-2];
        cout << fib[i] << endl;
    }

    return 0;
}