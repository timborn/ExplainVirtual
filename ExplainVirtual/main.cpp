//
//  main.cpp
//  ExplainVirtual
//
//  Created by Tim Born on 1/3/19.
//  Copyright © 2019 Tim Born. All rights reserved.
//

#include <iostream>
using namespace std;
#include "dog.hpp"
#include "lab.hpp"

int main(int argc, const char * argv[]) {
    dog stray;
    stray.bark();
    
    lab tibbie;
    tibbie.bark();
    
    // All well and good, but what happens when we refer to these via the base class?
    
    cout << "checking on the kennel:\n";
    dog kennel[10];
    kennel[0] = stray;
    kennel[1] = tibbie;
    int len = 2;
    
    for (int i=0; i<len; i++) {
        kennel[i].bark();
    }
    
    // what happens with virtual when accessed via a pointer?
    dog* betterKennel[10];
    betterKennel[0] = &stray;
    betterKennel[1] = &tibbie;
    
    cout << "checking on the betterKennel:\n";
    for (int i=0; i<len; i++) {
        betterKennel[i]->bark();
    }
    
    return 0;
}
