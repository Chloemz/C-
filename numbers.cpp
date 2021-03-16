//Name: Chloe Zambrano
//Below is a list of bool Function prototypes created to compute the following: (listed below)


//N is called a twin prime if either N-2 or N+2 (or both of them) is also a prime.
//For example, a prime 17 is a twin prime, because 17+2 = 19 is a prime as well.
//The first few twin primes are: 3, 5, 7, 11, 13, 17, 19, 29, 31

#include <iostream>
#include <cmath> //for sqrt function in Part B: Prime for loop below
using namespace std;
//Function Prototype Part A
//This checks if n is divisible by d
bool isDivisibleBy(int n, int d);

//Function Prototype Part B 
//This checks if n is prime
bool isPrime(int n);

//Function Prototype Part C
//This calculates the next prime after n 
int nextPrime(int n);

//Function Prototype Part D
//Returns the number of prime numbers in the interval 
//a ≤ x ≤ b. 
int countPrimes(int a, int b);

//Function Prototype Part E
//This determines whether or not its argument n is a twin prime.
bool isTwinPrime(int n);

//Function Prototype Part F
//This returns the smallest twin prime greater than n
int nextTwinPrime(int n);

//Function Prototype Part G
//This returns the largest twin prime in the range a ≤ N ≤ b.
//If there is no twin primes in range, it returns -1
int largestTwinPrime(int a, int b);

//Function Prototype Part A  
bool isDivisibleBy(int n, int d)
{
    if(d == 0) 
    {
        return false;
    }
    if(n%d == 0)
    {
        return true;
    }
    
    return false; //don't need else in an if statement, return does the same thing
    
}
//Function Prototype Part B 
//N= prime <=> it's not divisible evenly by # 2 to N−1, see for loop below
bool isPrime(int n)
{
    if(n <= 1)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) //goes from 2-srt N using #include <cmath> library
    {
        if(isDivisibleBy(n, i))
            
            return false;
        
    }
    return true; //for everything else n is prime
    //don't need else in an if statement, return does the same thing
}
//Function Prototype Part C
//NEXT PRIME: returns the smallest prime greater than n
//N= prime <=> it's not divisible evenly by # 2 to N−1, see for loop below
int nextPrime(int n)
{
    //keeps incrementing n + 1 until you know it's a prime #
    int ans = n+1;
    while(!isPrime(ans)) //while answer is not a prime # keep incrementing
    {
        ans++;
    }
    //while loop will stop when nextP is prime
    
    return ans; //roots answer back to print out statement
    //don't need else in an if statement, return does the same thing
}
//Function Prototype Part D
//This Program returns the number of prime numbers in the interval 
//a ≤ x ≤ b. 
int countPrimes(int n, int d)
{
    int ans= 0;
    for(int i= n; i <=d; i++)
    {
        if(isPrime(i))
            ans++;
    }
    return ans;
}    
//Function Prototype Part E
//This determines whether or not its argument n is a twin prime.
bool isTwinPrime(int n)
{
    
    if(isPrime(n) && (isPrime(n-2) || isPrime(n+2)))
    {
        return true;
    }
    return false;
    //a more advanced way to return but not recommended is
    //return isPrime(n) and isPrime(n-2) or isPrime(n+2);
}
//Function Prototype Part F
//This returns the smallest twin prime greater than n
int nextTwinPrime(int n)
{
    int i = n+1;
    while (i > n)
    {
        if (isTwinPrime(i) == true)
            return i;
    i++;
    }
}
//Function Prototype Part G
//This returns the largest twin prime in the range a ≤ N ≤ b.
//If there is no twin primes in range, it returns -1
//To find the largest value use the upper bound to lower bound
//The first twin primes should be the largest ones
int largestTwinPrime(int n, int d)
{
    for(int i = d; i>= n; i--)//decrement
    {
        if(isTwinPrime(i))
            return i;
    }
    return -1;
}
   int main()
   {
      int n, d;
      int ans;
      int i;
      cout << "Please enter two integers: "<< endl;
      cin >> n>>d;

      
      
      cout<< largestTwinPrime(n, d) <<endl;
     
      
      
      
      return 0;
    }
