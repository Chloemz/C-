//Name: Chloe Zambrano

//This Program swaps its three arguments to arrange them in sorted order.
// void sort2(int& a, int& b, int&c)


#include <iostream>   
#include <algorithm> 
using namespace std; 

 

void sort3(int &a, int &b, int &c)
{
    
    if(b<a)
    {
        swap(a, b);
        
    }
    if(c<a)
    {
        swap(a, c);
    }
    if(c<b)
    {
        swap(b, c);
    }
}
int main()
{
    int a, b, c; //Note: remember when to declare double vs int
    cout << "Please enter the first integer: "<< endl;
    cin >> a;
    cout << "Please enter the second integer: "<< endl;
    cin >> b;
    cout << "Please enter the second integer: "<< endl;
    cin >> c;
    
    sort3(a, b, c);
    
    cout<< a<<" "<<b<<" "<<c;
    return 0;  
}
