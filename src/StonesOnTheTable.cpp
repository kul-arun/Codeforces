// 266A. Stones on the Table

#include <iostream>
#include <string>

int main() {
    short n;
    std::cin >> n;
    std::string str;
    std::cin >> str;
    short count = 0;
    short i = 0;
    short j = 1;
    while (j < str.size()) {
        if (str[i] == str[j]) {
            ++count;
        }
        ++i;
        ++j;
    }
    std::cout << count << std::endl;
}
