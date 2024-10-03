#include "PlasticGarbage.h"

using namespace std;

PlasticGarbage::PlasticGarbage(string const& name, bool isClean) : isClean(isClean), name(name){}

void PlasticGarbage::clean(){
    isClean = true;
}

bool PlasticGarbage::isItClean() const {
    return isClean;
}