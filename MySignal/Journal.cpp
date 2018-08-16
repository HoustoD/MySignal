//
//  Journal.cpp
//  last
//
//  Created by Анюта on 27.07.18.
//  Copyright © 2018 Roman. All rights reserved.
//

#include "Journal.hpp"

void Journal::publish(const std::string name)
{
    onUpdate(name);
}