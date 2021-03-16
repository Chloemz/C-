//Name: Chloe Zambrano


//This Program prints the bottom-left half of a square, given the side length


#include <iostream>
using namespace std;
int main()
{
    int rows;
    
    cout << "Input side length: "; 
    cin >> rows; 
    
    
    cout<< "Shape:" <<endl;
    
    for (int i = 1; i <= rows; i++) //prints number of rows in ascending order 1, 2, 3, etc
    {
        
        for (int j = 1; j <= i; j++) //nested loop
        {
            cout<<'*'; 
        }
        
        cout<<endl;    //print new line is after each loop prints
    }

    return 0;
}
