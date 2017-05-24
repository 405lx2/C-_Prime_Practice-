
#include <iostream>
#include "Chapter8/Chapter8.h"

using namespace std;
int main() {
    //8.1
//    const char *pstr = "1234";
//    print_string_times(pstr, 2);
//    print_string_times(pstr, 0);
//    print_string_times(pstr, 3);
//    print_string_times(pstr, 3);
//    print_string_times(pstr, 3);

    //8.2
//    struct candy_bar candyBar;
//    candy_bar &default_candy_bar = candyBar;
//    candy_bar &new_candy_bar = candyBar;
//    set_value_for_candy_bar(default_candy_bar);
//    show_value_in_candy_bar(default_candy_bar);
//    set_value_for_candy_bar(new_candy_bar, "New Name", 3.31, 250);
//    show_value_in_candy_bar(new_candy_bar);

    //8.3
    string input_string;
    string &str = input_string;
    cout << "Enter a string(q to quit)" << endl;
    cin >> str;
    string_to_upper(str);

    return 0;
}