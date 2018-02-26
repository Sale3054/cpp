#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

int main() {
    int integer;
    long long_int;
    char character;
    float float_num;
    double double_num;
    cin >> integer >> long_int >> character >> float_num >> double_num;
    cout << integer << '\n' << long_int << '\n' << character << '\n';
    cout << std::fixed << std::setprecision(3) << float_num << '\n';
    cout << std::fixed << std::setprecision(9) << double_num << '\n';
    
    // Complete the code.
    return 0;
}
