
#include <iostream>

using namespace std;

template<typename Tvalue>
//!!!!! need to note how to difine template
Tvalue max5(Tvalue Tarray[]) {
    Tvalue max_value = Tarray[0];
    for (int i = 0; i < 5; i++) {
        if (max_value < Tarray[i]) {
            max_value = Tarray[i];
        }
    }
    return max_value;
}


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
//    string input_string;
//    string &str = input_string;
//    cout << "Enter a string(q to quit)" << endl;
//    cin >> str;
//    string_to_upper(str);

    //8.4
    int int_array[5] = {0, 4, 5, 2, 1};
    double double_array[5] = {1.2, 3.4, 2.7, 7.8, 9.1};
    int int_ret = max5(&int_array[0]);
    cout << "Max value in int_array: " << int_ret << endl;
    double double_ret = max5(&double_array[0]);
    cout << "Max value in double_array: " << double_ret << endl;

    return 0;
}
