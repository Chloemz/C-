//Name: Chloe Zambrano
//Email: Chloe.zambrano94@myhunter.cuny.edu
//CSCi 13500-01  Lab 4E upper.cpp
//Instructor: Tong Yi
//This Program prints the top-right half of a square, given the side length.
//example: input 3:
//***
// **
//  *


#include <iostream>
using namespace std;
int main()
{
    int rows;
    
    cout << "Input side length: "; 
    cin >> rows; 
    
  
    cout<< "Shape:" <<endl;
    
    for (int i = rows; i >= 1; i--) //prints number of rows in descending order
    {
        for (int j = rows-i; j > 0; j--) 
        //nested loop subs left corner of square with spaces instead of *s
        cout<<" ";
        
        for(int k = i; k > 0; k--) //k=i=row input length prints number of rows in descending order
        {
            cout<<'*'; 
        }
        
    cout<<endl;    //print new line is after each loop prints
    }

    return 0;
}