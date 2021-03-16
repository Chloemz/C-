//Name: Chloe Zambrano

//string function.cpp
//This Program returns a string containing the middle character in str 
//if the length of str is odd, or the two middle characters if the length is even. 
//For example, middle("middle") returns "dd". 


#include <iostream>
#include <string> //use string library for this function 
using namespace std;

string middle(string word)
{
    // Int len to get length
    int length = word.length();

    if((word.length() % 2) == 1)
    {
        return word.substr(length / 2, 1);
    }
    else
    {
        return word.substr((length/2)-1, 2);
    }
} 
    int main()
    {
        string word;
        cout << "Input a word:";
        cin >> word;
        
        cout << middle(word);
        
        return 0;
    }
