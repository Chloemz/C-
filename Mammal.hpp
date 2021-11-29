#ifndef MAMMAL_ 
#define MAMMAL_ 

#include <string>
#include "Animal.hpp"

/*
Note: you need to call the base class constructor (Animal) 
inside the Bird constructors to assign class values such as name, domestic, and predator. 
Since sub-class inherits from base-class, it inherits Animal's public and protected members,
BUT PRIVATE MEMBERS can only be accessed from the methods/functions inside the respective class.
*/
class Mammal: public Animal
{
public:
    Mammal();
    Mammal(std::string name, bool domestic, bool predator); 
    bool isAirborne() const;
    bool isAquatic() const;
    bool isToothed() const;
    bool hasHair() const;
    bool hasFins() const;
    bool hasTail() const;
    int legs() const;
    void setHair();
    void setAirborne(); 
    void setAquatic(); 
    void setToothed(); 
    void setFins();
    void setTail();
    void setLegs(int legs);
    /** @post displays bird data in the form:
    "animal_name is [not] domestic and [it is / is not] a predator,\n
    it is [not] airborne and it is [not] aquatic,\n
    it has [no] hair, [no] teeth, [no] fins, [no] tail and legs_ legs.\n”
    */
    void display() override;
protected:
    bool hair_;
    bool airborne_; 
    bool aquatic_; 
    bool toothed_;
    bool fins_;
    bool tail_;
    int legs_;
};

#endif