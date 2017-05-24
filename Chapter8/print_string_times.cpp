//
// Created by 405lx on 2017/5/23.
//
#include <cstring>
#include <ostream>
#include <iostream>
#include "Chapter8.h"


void print_string_times(const char *str, int times) {
    int temp_call_times = call_times;
    if (nullptr == str) {
        return;
    }
    if (times != 0) {
        std::cout << "Call time is " << call_times << std::endl;
        while (temp_call_times > 0) {
            std::cout << "This is the " << call_times - temp_call_times + 1 << " times to print " << str << std::endl;
            temp_call_times--;
        }
    }
    call_times++;
}

