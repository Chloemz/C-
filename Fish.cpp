
#include<iostream>
#include "Fish.hpp"
#include "Animal.hpp"
#include <string>

/*Note: for readability & minimum redundancy, I won't repeat comments that were stated previously
like Default constructor, Accessor function, already-mentioned techniques/conventions, & so on*/

//Task 3 out of 4: Animal, Bird, Fish, Mammal


Fish::Fish(): Animal(), venomous_(false)
{
    /*Alternative of initializer list would just be calling it in Bird's default constructor
    Animal();*/
}

Fish::Fish(std::string name, bool domestic = false, bool predator = false):Animal(name,domestic,predator),venomous_(false)
{

}   
    
/** Checks to see if venomous_ is true @return venomous_
*/
bool Fish::isVenomous() const
{
    return venomous_;
}
/** Mutates venomous_ and sets it to true @post venomous_ is set to true
*/
void Fish::setVenomous()
{
    venomous_ = true;
}
/** @post displays fish data in the form:
"animal_name is [not] domestic, [it is / is not] a predator\n and it is [not] venomous.\n"
*/
/*void Fish::display() 
{
    std::string checkDomes= isDomestic() ? "is":"is not";
    std::string checkPred= isPredator() ? "is": "is not";
    std::string checkVen= isVenomous() ? "is": "is not";

    std::cout<<"animal_name "<< checkDomes <<" domestic and "<< checkPred <<" a predator\n"; 
    std::cout<<"and it "<< checkVen <<" venomous.\n";

}*/

void Fish::display(){

    std::string msg = name_ + " is" + (domestic_ == 1 ? "" : " not") + " domestic, " + (predator_ == 1 ? "it is" : "is not") + " a predator\nand it is" + (venomous_ == 1 ? "" : " not")
     + " venomous.\n";

    std::cout << msg;
}
