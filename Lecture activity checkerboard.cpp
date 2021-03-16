//Name: Chloe Zambrano
//Email: Chloe.zambrano94@myhunter.cuny.edu
//CSCi 13500-01  Lab 4B checkerboard.cpp
//This Program asks the user to input width and height and prints a rectangular 
//checkerboard of the requested size using asterisks and spaces (alternating).

// Comment below how to make alternating spaces

#include <iostream>
using namespace std;
int main()
{
    int width, height;
    
    cout << "Input width:"; 
    cin >> width;
    
    cout << "Input height: ";
    cin >> height;
    
    cout<< "Shape:" <<endl;
    
    for (int row = 1; row <= height; row++) 
    {
        
        for (int col = 1; col <= width; col++) //prints dimensions width times height in nested loop
        {
            if((row + col) % 2 == 0) // Modulo operator
            {
            cout<<'*'; //note how cout endl is added after the loop
            }
            else
            {
                cout << " ";
            }
        }
        cout<<endl;    
    }

    return 0;
}