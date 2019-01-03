//
//  main.cpp
//  ExplainVirtual
//
//  Created by Tim Born on 1/3/19.
//  Copyright © 2019 Tim Born. All rights reserved.
//

#include <iostream>
#include "dog.hpp"
#include "lab.hpp"

int main(int argc, const char * argv[]) {
    dog stray;
    stray.bark();
    
    lab tibbie;
    tibbie.bark();
    
    return 0;
}
