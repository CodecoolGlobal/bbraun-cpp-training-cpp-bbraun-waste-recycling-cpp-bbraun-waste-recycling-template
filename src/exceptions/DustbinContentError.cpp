#include <iostream>
#include "DustbinContentError.h"

using namespace std;

DustbinContentError::DustbinContentError(std::string const& msg) : msg(msg) {}

void DustbinContentError::print() const {
    cerr << msg << endl;
}