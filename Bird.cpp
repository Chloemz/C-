
#include<iostream>
#include <string>
#include "Bird.hpp"
#include "Animal.hpp"

/*Note: for readability & minimum redundancy, I won't repeat comments that were stated previously
like Default constructor, Accessor function, already-mentioned techniques/conventions, & so on*/

//Task 2 out of 4: Animal, Bird, Fish, Mammal

/*Initializer list : Animal() implements Animal constructor in Bird default constructor
& shorthand for setting Animal's class variables to empty /or false*/
Bird::Bird(): Animal(), airborne_(0), aquatic_(0)
{
    /*Alternative of initializer list would just be calling it in Bird's default constructor
    Animal();*/
}

Bird::Bird(std::string name, bool domestic = false, bool predator = false):Animal(name, domestic, predator),airborne_(0), aquatic_(0) //Sets class variables
{

}  


bool Bird::isAirborne() const //Checks if Airborne
{
    return airborne_;
}

bool Bird::isAquatic() const
{
    return aquatic_;
}

void Bird::setAirborne()
{
    airborne_ = true;
}

void Bird::setAquatic()
{
    aquatic_ = true;
}


/*void Bird::display() 
{
    std::string checkDomes= isDomestic() ? "is":"is not";
    std::string checkPred= isPredator() ? "is": "is not";
    std::string checkAirB= isAirborne() ? "is": "is not";
    std::string checkAqua= isAquatic() ? "is": "is not";

    std::cout<<"animal_name "<< checkDomes <<" domestic and it "<<checkPred<<" a predator,\n"; 
    std::cout<<"it "<< checkAirB <<" airborne and it "<< checkAqua <<" aquatic.\n";

}*/

void Bird::display(){

    std::string msg =  name_ + " is" + (domestic_ == 1 ? "" : " not") + " domestic and " + (predator_ == 1 ? "it is" : "is not") + " a predator,\nit is" + 
    (airborne_ == 1 ? "" : " not") + " airborne and it is" + (aquatic_ == 1 ? "" : " not") +  " aquatic.\n";

    std::cout << msg;
}
