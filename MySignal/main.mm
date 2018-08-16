//
//  main.m
//  MySignal
//
//  Created by Анюта on 16.08.18.
//  Copyright © 2018 Roman. All rights reserved.
//


#include <iostream>
#include <thread>
#include "Journal.hpp"

#define JOURNAL_GROUP 1

int main(int argc, const char * argv[]) {
    
    Journal journal;
    
    journal.onUpdate.connect(JOURNAL_GROUP, [](std::string name){
        std::cout<< name << std::endl;
    });
    
    journal.publish("We have a new Journal for you");
    
    return 0;
}
