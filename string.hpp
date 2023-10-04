#ifndef STRING_HPP_
#define STRING_HPP_

#include <ostream>

namespace stu {
class string {
private:
    char *data;

public:
    string();
    string(const char *str);
    string(const string &other);
    ~string();
    string &operator=(const string &rhs);
    string &operator=(const char *rhs);
    size_t  size() const;
    char   *begin() const;
    char   *end() const;

    char                &operator[](size_t len) const;
    friend std::ostream &operator<<(std::ostream &os, const string &str);
};
} // namespace stu

#endif /* STRING_HPP */