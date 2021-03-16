/*
Name: Chloe Zambrano
Email: Chloe.zambrano94@myhunter.cuny.edu
CSCi13500-01 
Professor Tong Yi
Lab2C: Edit-Array.
This program creates an array of 10 integers, and provides the user 
with an interface to edit any of its elements.
*/

#include <iostream>   //The built-in library for input/output
using namespace std; //The names of standard definitions
int main()           //C++ programs all have a main() function
{
  // If you need to store values in a table-like fashion, C++ provides the following array data structure:
  int myData[10]; //Creates an array called myData with 10 cells each storing integer values
  for (int i = 0; i < 10; i++) //Use for loop to fill each cell with value 1 in range 0<= i <=10
  {
      myData[i]=1;
  }
  cout << endl; //Initializes end and separates the individual functions 
  int index, value;

  do
  {
     //Prints array under the condition that all values in it are equal to 1:
    for (int i = 0; i < 10; i++)
    { 
        //Prints each "spaced" array upto but not including 10
        cout << myData[i] << " ";
    }
    cout << endl; //Initializes end and separates the individual functions 
  
    // Get index and value from the user
    cout << "Input index: "<<endl;
    cin >> index;
    cout << "Input index: "<<endl;
    cin >> value; 

    //Set input values into array
    if(index >= 0 && index <= 9)
    {
        myData[index] = value;
    }

  }
  while(index >= 0 && index <=9); //Repeats command above so long as the conditions remain true
  
  cout << "Index out of range. Exit. "<<endl;
  
   
  return 0; //end function 
}