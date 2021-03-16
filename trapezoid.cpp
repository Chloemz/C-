//Name: Chloe Zambrano

//This Program prints an upside-down trapezoid of given width and height.
//example: Input width: 4 Input height: 3
// ****
// ***
// **
//On each line, print that number of spaces followed by that number of stars. 
//After that, the number of spaces gets incremented by 1, while the number of stars gets decremented by 2:

//spaces += 1;
//stars -= 2;

#include <iostream>
using namespace std;
int main()
{
   int width, height;
   
   cout << "Input width:";
   cin >> width; //Stars= width columns;
  
   cout << "Input height: ";
   cin >> height; //Stars= height rows;
  
   int space = 0;
   int stars = width;
   
   if(width-height < width/2)
   {
       cout<< "Impossible Shape!"<< endl;
   }
   else
   {
       cout<<"Shape: "<<endl;
       
       //Need 2 input variables for trapezoid nested loop: row and col
       
       for (int row = 0; row < height; ++row) 
       {
           for(int col = height+row; col > 0; --col)
           {
               cout<< " ";
               
           }
           for(int col = 0; col <(width-2*row); ++col)
           {
               cout<< "*";
               
               space+=1;
               stars-=2;
           }
           for(int spaces = 1; spaces < row; spaces +=1)
           {
               cout<<" ";
           }
           
           cout<<endl;
           
           
       }
       
   }
   return 0;
   
} 
