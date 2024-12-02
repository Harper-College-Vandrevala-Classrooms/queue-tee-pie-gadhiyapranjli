
#ifndef KITTY_HPP
#define KITTY_HPP

#include "Cutie.hpp"

class Kitty : public Cutie {
public:
    string description() override;
    int cuteness_rating() override;
};

#endif 
