//Name: Chloe Zambrano
//Email: Chloe.zambrano94@myhunter.cuny.edu
//CSCi 13500-01  HW E 4.8
//This Program reads a word and prints each character 
//of the word on a separate line. 

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string word;
    
    cout <<"Please enter a word: "<<endl;
    cin >> word;
    
    //Counting chars in a string
    int spaces = 0;
    for (int i = 0; i < word.length(); i++) 
    {
        if (word.substr(i, 1)== " ")
        { spaces++; }
        
        cout << word[i]<< endl; //Prints given word one char per line
    }
    
    
  return 0;    
}