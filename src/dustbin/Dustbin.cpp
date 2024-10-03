#include "Dustbin.h"
#include "DustbinContentError.h"

using namespace std;

Dustbin::Dustbin(string const& color) : color(color){};

void Dustbin::throwOutGarbage(Garbage const& garbage) {
    houseWasteContent.push_back(garbage);
}

void Dustbin::throwOutPaperGarbage(PaperGarbage const& paperGarbage) {
    if (paperGarbage.isItSqueezed()) {
        paperContent.push_back(paperGarbage);
    } else {
        throw DustbinContentError("Paper garbage should be squeezed!");
    }
}

void Dustbin::throwOutPlasticGarbage(PlasticGarbage const& plasticGarbage) {
    if (plasticGarbage.isItClean()) {
        plasticContent.push_back(plasticGarbage);
    } else {
        throw DustbinContentError("Plastic garbage should be cleaned!");
    }
}

void Dustbin::emptyContents() {
    paperContent.clear();
    plasticContent.clear();
    houseWasteContent.clear();
}

vector<PaperGarbage> const& Dustbin::getPaperContent() {
    return paperContent;
}

vector<PlasticGarbage> const& Dustbin::getPlasticContent() {
    return plasticContent;
}

vector<Garbage> const& Dustbin::getHouseWasteContent() {
    return houseWasteContent;
}