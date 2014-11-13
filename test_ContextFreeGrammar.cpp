//
//  test_ContextFreeGrammar.cpp
//  CompilerTask
//
//  Created by lms on 11/13/14.
//  Copyright (c) 2014 lms. All rights reserved.
//

#include "ContextFreeGrammar.h"
using namespace std;

int main()
{
    ContextFreeGrammar test_ContextFreeGrammar;
    unordered_set<string> test_terminalStr;
    unordered_set<string> test_nterminalStr;
    
    test_ContextFreeGrammar.addTerminalStr("t_hehe");
    test_ContextFreeGrammar.addTerminalStr("t_aiya");
    
    test_ContextFreeGrammar.addNTerminalStr("nt_haha");
    test_ContextFreeGrammar.addTerminalStr("nt_woqu");
    
    test_ContextFreeGrammar.addSingleProduction("1612", "10423");
    test_ContextFreeGrammar.addSingleProduction("1612", "10424");
    test_ContextFreeGrammar.setStartStr("is_it_start");
    
    
    
    
}
