#include "Dustbin9000.h"
#include "DustbinContentError.h"
#include "BottleCapException.h"

using namespace std;

Dustbin9000::Dustbin9000(string const& color) : color(color) {}

void Dustbin9000::throwOutGarbage(Garbage const& garbage){
    houseWasteContent.push_back(garbage);
}

void Dustbin9000::throwOutPaperGarbage(PaperGarbage const& paperGarbage){
    if (paperGarbage.isItSqueezed()){
        paperContent.push_back(paperGarbage);
    } else {
        throw DustbinContentError("Paper garbage should be squeezed!");
    }
}

void Dustbin9000::throwOutPlasticGarbage(PlasticGarbage const& plasticGarbage){
    if (plasticGarbage.isItClean()){
        plasticContent.push_back(plasticGarbage);
    } else {
        throw DustbinContentError("Plastic garbage should be cleaned!");
    }
}

void Dustbin9000::emptyContents(){
    paperContent.clear();
    plasticContent.clear();
    houseWasteContent.clear();
    metalContent.clear();
    bottleCaps.clear();
}

vector<PaperGarbage> const& Dustbin9000::getPaperContent(){
    return paperContent;
}

vector<PlasticGarbage> const& Dustbin9000::getPlasticContent(){
    return plasticContent;
}

vector<Garbage> const& Dustbin9000::getHouseWasteContent(){
    return houseWasteContent;
}

void Dustbin9000::throwOutMetalGarbage(MetalGarbage const& metalGarbage){
    if (metalGarbage.isItClean()){
        metalContent.push_back(metalGarbage);
    } else {
        throw DustbinContentError("Metal garbage should be cleaned!");
    }
}

void Dustbin9000::throwOutBottleCap(BottleCap const& bottleCap){
    if (bottleCap.isItClean()){
        if (bottleCap.getColor() == "pink"){
            bottleCaps.push_back(bottleCap);
        } else {
            throw BottleCapException("Only pink bottle caps can be thrown here!");
        }
    } else {
        throw BottleCapException("Bottle caps are plastic and should be clean!");
    }
}

vector<MetalGarbage> const& Dustbin9000::getMetalContent() {
    return metalContent;
}
vector<BottleCap> const& Dustbin9000::getBottleCaps() {
    return bottleCaps;
}