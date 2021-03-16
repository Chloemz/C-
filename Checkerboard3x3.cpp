//Name: Chloe Zambrano

//This Program asks the user to input width and height and 
//prints a checkerboard of 3-by-3 squares. (It should work 
//even if the input dimensions are not a multiple of three.

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

    for (int row = 0; row < height; row++) //checkerboard pattern loop
    {
        for (int col = 0; col < width; col++)  
        {
            if((row/3 + col/3)%2 == 0) // function prints the amount of user input divisible by 3
            {
                cout << "*";
            }
            else
            {
                cout<< " ";
            }
        }
        cout << endl; //end loop 
    }
    
    return 0;    
}
