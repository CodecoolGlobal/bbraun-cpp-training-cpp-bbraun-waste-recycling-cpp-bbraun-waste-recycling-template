#pragma once

#include "PlasticGarbage.h"

class BottleCap {
private:
    std::string const name;
    std::string const color;
    bool isClean;
public:
    std::string const& getColor() const;
    void clean();
    BottleCap(std::string const& name, bool isClean, std::string const& color);
    bool isItClean() const;
    std::string const& getName() const;
};