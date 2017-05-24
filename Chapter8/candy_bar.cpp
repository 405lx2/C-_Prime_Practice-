//
// Created by 405lx on 2017/5/24.
//

#include "Chapter8.h"
#include <iostream>

using namespace std;

void set_value_for_candy_bar(candy_bar &candy_bar1, const char *pname, double weight, int heat) {
    if (nullptr == pname) {
        return;
    }
    candy_bar1.candy_bar_name = pname;
    candy_bar1.candy_bar_weight = weight;
    candy_bar1.candy_bar_heat = heat;
}

void show_value_in_candy_bar(const candy_bar &candy_bar1) {
    cout << "candy_bar1.candy_bar_name: " << candy_bar1.candy_bar_name << endl;
    cout << "candy_bar1.candy_bar_weight: " << candy_bar1.candy_bar_weight << endl;
    cout << "candy_bar1.candy_bar_heat: " << candy_bar1.candy_bar_heat << endl;
}
