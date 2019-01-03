//
//  lab.hpp
//  ExplainVirtual
//
//  Created by Tim Born on 1/3/19.
//  Copyright © 2019 Tim Born. All rights reserved.
//

#ifndef lab_hpp
#define lab_hpp

#include <stdio.h>
#include "dog.hpp"

class lab : public dog {
public:
    virtual void bark();
};

#endif /* lab_hpp */
