//Name: Chloe Zambrano

//This Program asks the user to input width and height and prints a solid rectangular box of 
//the requested size using asterisks.

// Also, print a line Shape: between user input and the printed shape (to separate input from output).

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
            cout<<'*'; //note endl is added after the loop
        }
        cout<<endl;    
    }

    return 0;
}
