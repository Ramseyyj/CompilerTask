//
//  ContextFreeGrammar.cpp
//  CompilerTask
//
//  Created by lms on 11/13/14.
//  Copyright (c) 2014 lms. All rights reserved.
//

#include "ContextFreeGrammar.h"
using namespace std;

void ContextFreeGrammar::addTerminalStr(const string &newTerminalStr){
    terminalStr.insert(newTerminalStr);
}

void ContextFreeGrammar::addNTerminalStr(const string &newNTerminaStr){
    nterminalStr.insert(newNTerminaStr);
}

void ContextFreeGrammar::addSingleProduction(const string &nTermStr,
                                             const string &newProduction){
    production.insert({nTermStr,newProduction});
}

unordered_set<string> ContextFreeGrammar::getProductionFrStr(const string &str) const{
    unordered_set<string> result;
    
    for (auto pos = production.equal_range(str); pos.first!=pos.second; ++pos.first) {
        result.insert(pos.first->second);
    }
    return  result;
}

bool ContextFreeGrammar::isTerminalStr(const string &tempStr){
    if (terminalStr.find(tempStr) == terminalStr.end()) {
        return false;
    }
    return true;
}



