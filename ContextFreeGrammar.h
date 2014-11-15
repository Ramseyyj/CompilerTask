//
//  ContextFreeGrammar.h
//  CompilerTask
//
//  Created by lms on 11/13/14.
//  Copyright (c) 2014 lms. All rights reserved.
//

#ifndef __CONTEXT_FREE_GRAMMAR_H__
#define __CONTEXT_FREE_GRAMMAR_H__

#include <iostream>
#include <string>
#include <unordered_set>
#include <map>
#include <utility>

class ContextFreeGrammar
{
public:
    ContextFreeGrammar() = default;
    void addTerminalStr(const std::string &);
    void addNTerminalStr(const std::string &);
    void addSingleProduction(const std::string &prdtionLeft, const std::string &prdtionRight);
    
    void setStartStr(const std::string &);
    
    //返回某一特定非终结符的所有产生式
    std::unordered_set<std::string> getProductionFrStr(const std::string &) const;
    std::unordered_set<std::string> getAllTerminalStr() const;
    std::unordered_set<std::string> getAllNTerminalStr() const;
    std::string getStartStr() const;
    
    bool isTerminalStr(const std::string &);

private:
    std::string startStr;
    std::unordered_set<std::string> terminalStr;
    std::unordered_set<std::string> nterminalStr;
    std::multimap<std::string,std::string> production;
    
};

inline std::unordered_set<std::string> ContextFreeGrammar::getAllTerminalStr() const{
    return terminalStr;
}

inline std::unordered_set<std::string> ContextFreeGrammar::getAllNTerminalStr() const{
    return nterminalStr;
}

inline void ContextFreeGrammar::setStartStr(const std::string &str){
    startStr = str;
}

inline std::string ContextFreeGrammar::getStartStr() const{
    return startStr;
}

#endif /* defined(__CONTEXT_FREE_GRAMMAR_H__) */
