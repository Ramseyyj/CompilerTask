//
//  LLOneGrammar.h
//  CompilerTask
//
//  Created by lms on 11/16/14.
//  Copyright (c) 2014 lms. All rights reserved.
//

#ifndef __CompilerTask__LLOneGrammar_H__
#define __CompilerTask__LLOneGrammar_H__

#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>

class LLOneGrammar
{
public:
    
    
    std::unordered_set<std::string> getSingleFirSet(const std::string &) const;
    std::unordered_set<std::string> getSingleFlwSet(const std::string &) const;
    std::string getPredictStr(const std::string &preStr,
                              const std::string &curStr) const;
    bool isInFirSet(const std::string &str,
                    const std::string &nterminalStr) const;
    bool isInFlwSet(const std::string &str,
                    const std::string &nterminalStr) const;
    
    
private:
    std::unordered_set<std::string> firstSet;
    std::unordered_set<std::string> followSet;
    std::vector<std::vector<std::string>> predictTable; // need to think of it
    
    void calPredictTable();
};


#endif /* defined(__CompilerTask__LLOneGrammar_H__) */
