#pragma once

#include <string>

class DustbinContentError {
private:
   std::string const msg;
public:
   DustbinContentError(std::string const& msg);
   void print() const;
};