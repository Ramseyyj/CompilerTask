//
//  test_ContextFreeGrammar.cpp
//  CompilerTask
//
//  Created by lms on 11/13/14.
//  Copyright (c) 2014 lms. All rights reserved.
//

#include "ContextFreeGrammar.h"
using namespace std;

void printStr(const unordered_set<string> &test_set,const int flag){
    if (flag==1) {
        cout << "nterminal string is :" << endl;
    }
    else{
        cout << "terminal string is :" << endl;
    }
    
    for (auto ptr = test_set.cbegin(); ptr!=test_set.cend(); ++ptr) {
        cout << *ptr <<endl;
    }
    cout<<endl;
}

void printProdcution(const string &str, const unordered_set<string> &test_prdtion){
    for (auto ptr = test_prdtion.cbegin(); ptr!= test_prdtion.cend(); ++ptr) {
        cout << str << "-->" <<*ptr<<endl;
    }
    cout<<endl;
}

int main()
{
    ContextFreeGrammar test_ContextFreeGrammar;
    
    unordered_set<string> test_production;
    unordered_set<string> test_terminalStr;
    unordered_set<string> test_nterminalStr;
    
    string test_startStr;
    
    test_ContextFreeGrammar.addTerminalStr("t_hehe");
    test_ContextFreeGrammar.addTerminalStr("t_aiya");
    
    test_ContextFreeGrammar.addNTerminalStr("nt_haha");
    test_ContextFreeGrammar.addNTerminalStr("nt_woqu");
    
    test_ContextFreeGrammar.addSingleProduction("1612", "10423");
    test_ContextFreeGrammar.addSingleProduction("1612", "10424");
    test_ContextFreeGrammar.addSingleProduction("10424", "10427");
    test_ContextFreeGrammar.addSingleProduction("is_it_start", "10426");
    test_ContextFreeGrammar.setStartStr("is_it_start");
    
    test_production=test_ContextFreeGrammar.getProductionFrStr("1612");
    test_terminalStr=test_ContextFreeGrammar.getAllTerminalStr();
    test_nterminalStr=test_ContextFreeGrammar.getAllNTerminalStr();
    test_startStr=test_ContextFreeGrammar.getStartStr();
    
    printProdcution("1612", test_production);
    printStr(test_terminalStr, 0);
    printStr(test_nterminalStr, 1);
    
    cout<<"Start string is : "<<test_startStr<<endl<<endl;
    
    if (test_ContextFreeGrammar.isTerminalStr("t_hehe")) {
        cout << "t_hehe is a terminal string"<<endl;
    }
    else{
        cout<<"t_hehe is not a termianl string"<<endl;
    }

    if (test_ContextFreeGrammar.isTerminalStr("s_hehe")) {
        cout << "s_hehe is a terminal string"<<endl;
    }
    else{
        cout<<"s_hehe is not a termianl string"<<endl;
    }
    
    return 0;
}
