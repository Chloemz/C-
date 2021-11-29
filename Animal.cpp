

#include<iostream>
#include <string>
#include "Animal.hpp"


//Task 1 out of 4: Animal, Bird, Fish, Mammal
Animal::Animal()//default constructor
{
    name_="";
    domestic_ = false;
    predator_ = false;

}

/*Note: Bool-type = false was initialized in the hpp file, 
therefore don't need to re-initialize bool type argument here*/
Animal::Animal(std::string name, bool domestic, bool predator) //setter/mutator function
{
    name_ = name; 
    domestic_ = domestic;
    predator_ = predator;
}    


std::string Animal::getName() const //const == accessor/getter functions
{
    return name_;
}


bool Animal::isDomestic() const
{
    return domestic_;
    /*if(domestic_==true)
    {
        return true;
    }    
    else
    {
        return false;
    }*/
}

bool Animal::isPredator() const
{
    return predator_;
    /*if(predator_== true)
    {
        return true;
    }    
    else
    {
        return false;
    }*/
}

/* Note remember Void functions never return a value*/
void Animal::setName(std::string name)//setter/mutator function
{
   name_ = name;
}

void Animal::setDomestic()
{
    domestic_ = true;
}

void Animal::setPredator()
{
    predator_ = true;
}