
#ifndef PUPPY_HPP
#define PUPPY_HPP

#include "Cutie.hpp"

class Puppy : public Cutie {
public:
    string description() override;
    int cuteness_rating() override;
};

#endif 
