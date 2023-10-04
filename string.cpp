#include "string.hpp"
#include <cstddef>
#include <cstring>

namespace stu {
string::string() : data(nullptr)
{}

string::string(const char *str)
{
    data = new char[std::strlen(str) + 1];
    std::strcpy(data, str);
}

string::string(const string &other)
{
    data = new char[std::strlen(other.data) + 1];
    std::strcpy(data, other.data);
}

string::~string()
{
    delete[] data;
}

stu::string &string::operator=(const string &rhs)
{
    if (this != &rhs) {
        delete[] data;
        data = new char[std::strlen(rhs.data) + 1];
        std::strcpy(data, rhs.data);
    }
    return *this;
}

stu::string &string::operator=(const char *rhs)
{
    delete[] data;
    data = new char[std::strlen(rhs) + 1];
    std::strcpy(data, rhs);
    return *this;
}

size_t string::size() const
{
    if (data) {
        return std::strlen(data);
    } else {
        return 0;
    }
}

char *string::begin() const
{
    return data;
}

char *string::end() const
{
    return data + std::strlen(data);
}

char &string::operator[](size_t i) const
{
    return data[i];
}

std::ostream &operator<<(std::ostream &os, const string &str)
{
    if (str.data) {
        os << str.data;
    }
    return os;
}
} // namespace stu
