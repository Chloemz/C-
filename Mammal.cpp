
#include<iostream>
#include <string>
#include "Mammal.hpp"
#include "Animal.hpp"



/*Note: for readability & minimum redundancy, I won't repeat comments that were stated previously
like Default constructor, Accessor function, already-mentioned techniques/conventions, & so on*/

//Task 4 out of 4: Animal, Bird, Fish, Mammal

Mammal::Mammal(): Animal()
{
    /*hair_ = false;
    airborne_ = false;
    aquatic_ = false; 
    toothed_ = false; 
    fins_ = false; 
    tail_ = false; 
    legs_ = 0;*/

}

Mammal::Mammal(std::string name, bool domestic = false, bool predator = false) : Animal(name, domestic, predator), hair_(false), airborne_(false), aquatic_(false), toothed_(false), fins_(false), tail_(false), legs_(0)
{

} 

bool Mammal::hasHair() const
{
    return hair_;
}

bool Mammal::isAirborne() const
{
    return airborne_;
}
bool Mammal::isAquatic() const
{
    return aquatic_;
}
bool Mammal::isToothed() const
{
    return toothed_;
}
bool Mammal::hasFins() const
{
    return fins_;
}
bool Mammal::hasTail() const
{
    return tail_;
}
int Mammal::legs() const
{
    return legs_;
}
void Mammal::setHair()
{
    hair_=true;
}
void Mammal::setAirborne() 
{
   airborne_ = true;
}
void Mammal::setAquatic() 
{
    aquatic_ = true;
} 
void Mammal::setToothed()
{
    toothed_=true;
} 
void Mammal::setFins()
{
    fins_=true;
}
void Mammal::setTail()
{
    tail_=true;
}
void Mammal::setLegs(int legs)
{
    legs_=legs;
}


/** @post displays bird data in the form:
"animal_name is [not] domestic and [it is / is not] a predator,\n
it is [not] airborne and it is [not] aquatic,\n
it has [no] hair, [no] teeth, [no] fins, [no] tail and legs_ legs.\n”
*/
/*void Mammal::display() 
{
    std::string checkDomes= isDomestic() ? "is":"is not";
    std::string checkPred= isPredator() ? "is": "is not";

    std::string checkAirB= isAirborne() ? "is": "is not";
    std::string checkAqua= isAquatic() ? "is": "is not";

    std::string checkHair= hasHair() ? "has": "has no";
    std::string checkTeeth= hasTeeth() ? "has": "has no";
    std::string checkFin= hasFins() ? "has": "has no";
    std::string checkTail= hasTail() ? "has": "has no";
    std::string to_string(legs());

    std::cout<<"animal_name "<< checkDomes <<" domestic and "<< checkPred <<" a predator,\n"; 
    std::cout<<"it "<< checkAirB <<" airborne and it "<< checkAqua <<" aquatic,\n";
    std::cout<<"it "<< checkHair<< " hair, "<< checkTeeth <<" teeth, "<< checkFin<< " fins, "<< checkTail<< " tail and "<< << " legs.\n";

}*/

 
/*
+ shorthand for <<
*/
void Mammal::display(){


    std::string msg =  name_ + " is " + (domestic_ == 1 ? "" : "not ") + "domestic and it is " + (predator_ == 1 ? "" : "not ") + "a predator,\nit is" + 
    (airborne_ == 1 ? "" : " not") + " airborne and it is " + (aquatic_ == 1 ? "" : "not ") +  "aquatic,\nit has" + (hair_ == 1 ? "" : " no") + " hair,"
    + (toothed_ == 1 ? "" : " no ") + " teeth," + (fins_ == 1 ? "" : " no") + " fins," +  (tail_ == 1 ? "" : " no") + " tail and " + ((legs_ >= 0 && legs_ <=6) ? std::to_string(legs()) : "0" )
    + " legs.\n";

    std::cout << msg;
}