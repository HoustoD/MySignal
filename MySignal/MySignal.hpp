//
//  MySignal.hpp
//  last
//
//  Created by Анюта on 27.07.18.
//  Copyright © 2018 Roman. All rights reserved.
//
// boost::signal2

#pragma once

#include <map>
#include <functional>
#include <string>


typedef std::function<void(std::string)> SignalFunc;

class MySignal
{
public:
    ~MySignal();
    
    void connect(int64_t slot, SignalFunc func); // добавить слушателя
    void disconnect(int64_t slot);
    void disconnect_all();
    void operator()(const std::string& name); // оповещать
private:
    std::map<int64_t, SignalFunc> m_functions;// ckeifntkm
};