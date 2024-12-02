// Cutie.hpp
#ifndef CUTIE_HPP
#define CUTIE_HPP

#include <string>

using namespace std;

class Cutie {
public:
    virtual string description() = 0;  
    virtual int cuteness_rating() = 0; 
    virtual ~Cutie() = default;  
};

#endif 
