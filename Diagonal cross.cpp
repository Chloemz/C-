//Name: Chloe Zambrano

//This Program asks the user to input the shape size, a
//and prints a diagonal cross of that dimension.

// Comment below how to make alternating spaces

#include <iostream>
using namespace std;
int main()
{
    int size;
    
    cout << "Input size: "; 
    cin >> size;
    
    
    cout<< "Shape:" <<endl;
    
    for (int row = 1; row <= size; row++) 
    {
        
        for (int col = 1; col <= size; col++) //prints dimensions width times height in nested loop
        {
            if(col == row || col == (size + 1 - row)) // Or operator 
            {
                cout<<'*'; //prints a star in rowth and size + 1 - row columns
            }
            else
            {
                cout << " ";
            }
        }
        cout<<endl;    //print new line is after each loop prints
    }

    return 0;
    
}
