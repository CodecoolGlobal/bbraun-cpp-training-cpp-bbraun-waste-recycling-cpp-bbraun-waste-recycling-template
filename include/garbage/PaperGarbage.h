#pragma once

#include <string>

class PaperGarbage {
private:
    std::string const name;
    bool isSqueezed;
public:
    PaperGarbage(std::string const& name, bool isSqueezed);
    void squeeze();
    bool isItSqueezed() const;
};