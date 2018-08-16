//
//  MySignal.cpp
//  last
//
//  Created by Анюта on 27.07.18.
//  Copyright © 2018 Roman. All rights reserved.
//

#include "MySignal.hpp"


 MySignal::~MySignal()
{
    m_functions.clear();
}

// добавить слушателя
void MySignal::connect(int64_t slot, SignalFunc func)
{
    m_functions.insert(std::make_pair(slot, func));
}

void MySignal::disconnect(int64_t slot)
{
    //std::map<int64_t, std::function<void()>>::iterator it;
    auto it =  m_functions.find(slot);
    
    if(it != m_functions.end())
    {
        m_functions.erase(it);
    }
}

void MySignal::disconnect_all()
{
    m_functions.clear();
}

// оповещать
void MySignal::operator()(const std::string& name)
{
    for(auto funcPair : m_functions)
    {
        funcPair.second(name);// second это второй параметр в map (т.е. функция)
    }
}