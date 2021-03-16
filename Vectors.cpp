/*
Chloe Zambrano 
Prints size given the vector input
*/ 

#include <iostream>     
#include <vector>
using namespace std; 
int main()           

{
    vector<int>num(4);
    num.push_back(4);
    cout << "Vector num has " << num.size() << " elements." ;
}
