#include <iostream>     //The built-in library for input/output
#include <string>
using namespace std; //The names of standard definitions
int main()           //C++ programs all have a main() function
{
    int x = 10;	
    string size;
    	
    if (x<10)
    {
        size = "small";
        cout<< size << endl; 
    }
    else if(x<20)
    {
        size = "medium";
        cout<< size <<endl;
    }
    return 0;	
}	

