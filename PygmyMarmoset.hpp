
#ifndef PYGMYMARMOSET_HPP
#define PYGMYMARMOSET_HPP

#include "Cutie.hpp"

class PygmyMarmoset : public Cutie {
public:
    string description() override;
    int cuteness_rating() override;
};

#endif 
