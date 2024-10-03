#pragma once

#include <string>

class MetalGarbage {
private:
    std::string const name;
    bool isClean;
public:
    MetalGarbage(std::string const &name, bool isClean);
    void clean();
    bool isItClean() const;
};