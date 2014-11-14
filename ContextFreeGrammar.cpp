//
//  ContextFreeGrammar.cpp
//  CompilerTask
//
//  Created by lms on 11/13/14.
//  Copyright (c) 2014 lms. All rights reserved.
//

#include "ContextFreeGrammar.h"

void ContextFreeGrammar::addTerminalStr(const std::string &newTerminalStr){
    terminalStr.insert(newTerminalStr);
}

void ContextFreeGrammar::addNTerminalStr(const std::string &newNTerminaStr){
    nterminalStr.insert(newNTerminaStr);
}

void ContextFreeGrammar::addSingleProduction(const std::string &prdtionLeft,
                                             const std::string &prdtionRight){
    production.insert({prdtionLeft,prdtionRight});
    
    if (nterminalStr.find(prdtionLeft) == nterminalStr.end()) {
        nterminalStr.insert(prdtionLeft);
        terminalStr.erase(prdtionLeft);//delete if in terminalStr
    }
    
    if (nterminalStr.find(prdtionRight) == nterminalStr.end()
            && terminalStr.find(prdtionRight) == terminalStr.end()) {
        terminalStr.insert(prdtionRight);
    }
}

std::unordered_set<std::string> ContextFreeGrammar::getProductionFrStr(const std::string &str) const{
    std::unordered_set<std::string> result;
    
    for (auto pos = production.equal_range(str); pos.first!=pos.second; ++pos.first) {
        result.insert(pos.first->second);
    }
    return  result;
}

bool ContextFreeGrammar::isTerminalStr(const std::string &tempStr){
    if (terminalStr.find(tempStr) == terminalStr.end()) {
        return false;
    }
    return true;
}



