// 705A. Hulk

#include <iostream>
#include <string>

int main() {
    short n;
    std::cin >> n;
    std::string str = "hate";
    for (int i=0; i<n-1; ++i) {
        std::cout << "I " << str << " that ";
        str = (str == "hate" ? "love" : "hate");
    }
    std::cout << "I " << str << " it\n";
}
