//
// Created by 405lx on 2017/5/24.
//
#include "Chapter8.h"
#include <iostream>

int string_to_upper(std::string &string_to_cast) {
    int length = string_to_cast.length();
    int index = 0;
    if (string_to_cast[index] == 'q') {
        std::cout << "Bye" << std::endl;
        return 1;
    }
    while (index < length) {
        string_to_cast[index] = toupper(string_to_cast.at(index));
        index++;
    }
    std::cout << string_to_cast << std::endl;
    return 0;
}
