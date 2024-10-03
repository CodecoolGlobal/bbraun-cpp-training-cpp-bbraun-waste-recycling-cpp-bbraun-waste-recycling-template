#include "BottleCap.h"

using namespace std;

BottleCap::BottleCap(string const& name, bool isClean, string const& color) : color(color), name(name), isClean(isClean){}

void BottleCap::clean(){
    isClean = true;
}

string const& BottleCap::getColor() const {
    return color;
}

bool BottleCap::isItClean() const {
    return isClean;
}

string const& BottleCap::getName() const {
    return name;
}