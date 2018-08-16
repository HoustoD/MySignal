//
//  Journal.hpp
//  last
//
//  Created by Анюта on 27.07.18.
//  Copyright © 2018 Roman. All rights reserved.
//

#pragma once

#include "MySignal.hpp"

class Journal
{
public:
    MySignal onUpdate;
    void publish(const std::string name);
};
