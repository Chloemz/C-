//Name: Chloe Zambrano
//Email: Chloe.zambrano94@myhunter.cuny.edu
//CSCi 13500-01  HW E8.1 open read file stream.cpp
//Instructor: Tong Yi
//This Program opens file hello.txt, enters msg “Hello, World!”,
//saves&closes file. Opens same file again. Reads msg into string variable & prints it.
//ifstream is input, ofstream is output, fstream is both
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream my_file;
	my_file.open("hello.txt");
	
	if (my_file.fail())
	{
	    cout << "Cannot read from input.dat" << endl;
	    
	}
	else
	{
	    ifstream in_file;
	    in_file.open(("hello.txt");
	    in_file >> name >> value; //name >> same as using cin >>
	    
	    ofstream out_file; 
	    out_file.open("c:\\hello.txt"); // use \\ for ending a string literal
	    out_file << name << "Hello, World!" << value << endl;
	    
	    void close(); //fstreams close function
	    my_file.colse();
	}

    fstream my_file;
	my_file.open("hello.txt");

	if (my_file.fail())
	{
	    cout << "Cannot read from input.dat" << endl;
	    
	}
	else
	{
	    ifstream in_file;
	    in_file.open(("hello.txt");
	    string name;
	    double value;
	    
	    while(1) //look over txt
	    {
	        my_file>> name;
	        
	        if(my_file.eof())
	        {
	            break;
	        }
	        cout << name<< endl;
	       
	    }
	
	return 0;
}