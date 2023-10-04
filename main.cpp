#include <iostream>
#include "string.hpp"

void print_with_iter(const stu::string &str)
{
    auto iter{str.begin()};

    while (iter != str.end()) {
        std::cout << *iter;
        iter += 1;
    }
    std::cout << "\n";
}

int main(void)
{
    stu::string str("hello");

    print_with_iter(str);
}