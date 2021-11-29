#ifndef BIRD_ 
#define BIRD_ 
#include <string>
#include "Animal.hpp"
/*
Note: you need to call the base class constructor (Animal) 
inside the Bird constructors to assign class values such as name, domestic, and predator. 
Since sub-class inherits from base-class, it inherits Animal's public and protected members,
BUT PRIVATE MEMBERS can only be accessed from the methods/functions inside the respective class.
*/
class Bird: public Animal
{
public:
    Bird(); //default constructor
    Bird(std::string name, bool domestic, bool predator); //parameterized constructor
    
    bool isAirborne() const;
    
    bool isAquatic() const;
    
    void setAirborne();
    
    void setAquatic(); 
    
    void display() override;

protected:
    bool airborne_;
    bool aquatic_;
};

#endif