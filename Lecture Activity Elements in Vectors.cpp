#include <iostream>     //The built-in library for input/output
#include <vector>
using namespace std; //The names of standard definitions
int main()           //C++ programs all have a main() function

{
    vector<int> num(4);
    num.push_back(4);
    cout << num[4];
}