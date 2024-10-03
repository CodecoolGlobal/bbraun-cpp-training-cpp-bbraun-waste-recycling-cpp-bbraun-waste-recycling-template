#include "PaperGarbage.h"

using namespace std;

PaperGarbage::PaperGarbage(string const& name, bool isSqueezed) : isSqueezed(isSqueezed), name(name){}

void PaperGarbage::squeeze(){
    isSqueezed = true;
}

bool PaperGarbage::isItSqueezed() const {
    return isSqueezed;
}