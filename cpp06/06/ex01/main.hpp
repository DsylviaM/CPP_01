#ifndef MAIN_HPP
#define MAIN_HPP

#include "iostream"

struct Data {
    std::string name;
    int age;
    std::string profession;
};

uintptr_t serialize(Data *ptr);
Data* deserialize(uintptr_t raw);
std::ostream& operator<<(std::ostream& out, const Data &a);

#endif
