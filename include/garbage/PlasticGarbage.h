#pragma once

#include <string>

class PlasticGarbage {
private:
    std::string const name;
    bool isClean;
public:
    PlasticGarbage(std::string const& name, bool isClean);
    void clean();
    bool isItClean() const;
};