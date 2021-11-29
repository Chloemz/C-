#ifndef FISH_ 
#define FISH_ 

#include <string>
#include "Animal.hpp"
/*
Note: you need to call the base class constructor (Animal) 
inside the Bird constructors to assign class values such as name, domestic, and predator. 
Since sub-class inherits from base-class, it inherits Animal's public and protected members,
BUT PRIVATE MEMBERS can only be accessed from the methods/functions inside the respective class.
*/
class Fish: public Animal
{
public:
    Fish(); //default constructor
    Fish(std::string name, bool domestic, bool predator); //parameterized constructor
    
    
    /** Checks to see if venomous_ is true @return venomous_
    */
    bool isVenomous() const;
    /** Mutates venomous_ and sets it to true @post venomous_ is set to true
    */
    void setVenomous();
    /** @post displays fish data in the form:
    "animal_name is [not] domestic, [it is / is not] a predator\n and it is [not] venomous.\n"
    */
    void display() override;

protected:
    bool venomous_;
};

#endif