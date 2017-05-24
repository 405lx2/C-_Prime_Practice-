//
// Created by 405lx on 2017/5/23.
//

#ifndef C_PRIME_PRACTICE_CHAPTER8_H
#define C_PRIME_PRACTICE_CHAPTER8_H

//Const variable areas
static int call_times = 0;

//Definition of struct
struct candy_bar {
    const char *candy_bar_name;
    double candy_bar_weight;
    int candy_bar_heat;
};

//Definition of function
//void print_string_times(const char *str, int);

void set_value_for_candy_bar(candy_bar &candy_bar1, const char *pname = "Millennium Munch", double weight = 2.85,
                             int heat = 350);

void show_value_in_candy_bar(const candy_bar &candy_bar1);
#endif //C_PRIME_PRACTICE_CHAPTER8_H
