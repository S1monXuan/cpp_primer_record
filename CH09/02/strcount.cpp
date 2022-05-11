#include "strcount.h"

void strcount(const std::string str){
    using namespace std;
    static int total = 0;
    int count = str.length();
    total += count;
    cout << count << " characters\n";
    cout << total << " characters total\n";
}