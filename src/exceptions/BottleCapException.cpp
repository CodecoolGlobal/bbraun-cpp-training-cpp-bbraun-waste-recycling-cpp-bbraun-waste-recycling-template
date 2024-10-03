#include <iostream>
#include "BottleCapException.h"

using namespace std;

BottleCapException::BottleCapException(std::string const& msg) : msg(msg) {}

std::string const& BottleCapException::what() const {
    return msg;
}

void BottleCapException::print() const {
    cerr << msg << endl;
}