#ifndef ANIMAL_ //#ifndef, #define, & #endif = headerguards to keep headerfiles from being repeated
#define ANIMAL_ 

#include <string>

class Animal
{
public:
    Animal(); //Default Constructor: sets class variables to "", 0, false respectively by variable type
   
    /* Technique: use 'std::' instead of 'using namespace std;' in header file 
    for optimal usability & integration.
    */
    Animal(std::string name, bool domestic, bool predator); //Parameterized constructor
    
    //Gives the animal's name: return name_
    std::string getName() const; 
    /* const used for getter functions bc they're not changing value. 
    Note: Getter functions are accessor functions.*/
    
    //Checks if animal is domestic: return domestic_ 
    bool isDomestic() const;
   
    //Checks if animal is a predator: return true if predator_ 
    bool isPredator() const;
    

    /*Sets animal's name in param: name_ = name
    Note: Setter functions are mutator functions */
    void setName(std::string name);

    //Mutates animal domestic_ = true 
    void setDomestic();

    //Mutates animal's predator_ = true
    void setPredator();

    /*
    This is what makes the class abstract
    You will override this for each inherited class.
    Note: comment out only when testing int main for animal.cpp 
    */
    virtual void display() = 0;

protected:
    /*Variable names from classes followed by underscore_
    for optimal readability, but no_ in parameter variables*/
    std::string name_; 
    bool domestic_;
    bool predator_;
};


#endif