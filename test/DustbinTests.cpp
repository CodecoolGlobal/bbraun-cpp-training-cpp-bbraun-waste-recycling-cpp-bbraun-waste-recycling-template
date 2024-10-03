#include <iostream>
#include "DustbinTests.h"
#include "BottleCapException.h"

using namespace std;

bool Tester::throwOutProperBottleCap(Dustbin9000 dustbin, BottleCap const& bottleCap) {
    dustbin.emptyContents();
    dustbin.throwOutBottleCap(bottleCap);
    vector<BottleCap> bottleCaps = dustbin.getBottleCaps();
    if(bottleCaps.size() == 1 && bottleCaps[0].getName() == bottleCap.getName()){
        return true;
    } else {
        return false;
    }
}

bool Tester::throwOutNotProperBottleCap(Dustbin9000 dustbin, BottleCap const& bottleCap) {
    dustbin.emptyContents();
    try {
        dustbin.throwOutBottleCap(bottleCap);
    } catch (BottleCapException &e) {
        return e.what() == "Only pink bottle caps can be thrown here!";
    }
    return false;
}

void Tester::throwOutBottleCaps(Dustbin9000 dustbin) {
    BottleCap bottleCap1("BottleCap1", true, "pink");
    BottleCap bottleCap2("BottleCap2", true, "blue");
    if(throwOutProperBottleCap(dustbin, bottleCap1)){
        cout << "Proper bottle cap thrown out successfully!" << endl;
    } else {
        cout << "Proper bottle cap not thrown out successfully!" << endl;
    }
    if(throwOutNotProperBottleCap(dustbin, bottleCap2)){
        cout << "NOT proper bottle cap handeled successfully!" << endl;
    } else {
        cout << "NOT proper bottle cap not handeled successfully!" << endl;
    }
}

void Tester::run(){
    Dustbin9000 dustbin{"braun"};
    throwOutBottleCaps(dustbin);

}

