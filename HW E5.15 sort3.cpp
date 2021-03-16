//Name: Chloe Zambrano
//Email: Chloe.zambrano94@myhunter.cuny.edu
//CSCi 13500-01  HW E5.15 sort3.cpp
//Instructor: Tong Yi
//This Program swaps its three arguments to arrange them in sorted order.
// void sort2(int& a, int& b, int&c)


#include <iostream>   //The built-in library for input/output
#include <algorithm> // for swap function
using namespace std; //The names of standard definitions

 

void sort3(int &a, int &b, int &c)
{
    
    if(b<a)
    {
        swap(a, b);
        
    }
    if(c<a)
    {
        swap(a, c);
    }
    if(c<b)
    {
        swap(b, c);
    }
}
int main()
{
    int a, b, c; //Note: remember when to declare double vs int
    cout << "Please enter the first integer: "<< endl;
    cin >> a;
    cout << "Please enter the second integer: "<< endl;
    cin >> b;
    cout << "Please enter the second integer: "<< endl;
    cin >> c;
    
    sort3(a, b, c);
    
    cout<< a<<" "<<b<<" "<<c;
    return 0;  
}