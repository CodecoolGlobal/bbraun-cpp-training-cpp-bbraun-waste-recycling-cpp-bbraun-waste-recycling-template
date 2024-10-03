#include "MetalGarbage.h"

using namespace std;

MetalGarbage::MetalGarbage(string const& name, bool isClean) : isClean(isClean), name(name){}

void MetalGarbage::clean() {
    isClean = true;
}

bool MetalGarbage::isItClean() const {
    return isClean;
}