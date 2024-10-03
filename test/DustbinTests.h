#pragma once

#include "Dustbin9000.h"

class Tester {
private:
   bool throwOutProperBottleCap(Dustbin9000 dustbin, BottleCap const &bottleCap);
   bool throwOutNotProperBottleCap(Dustbin9000 dustbin, BottleCap const &bottleCap);
   void throwOutBottleCaps(Dustbin9000 dustbin);
public:
   void run();
};