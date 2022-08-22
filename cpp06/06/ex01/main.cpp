#include "main.hpp"

uintptr_t serialize(Data *ptr) {
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw) {
    return (reinterpret_cast<Data *>(raw));
}

std::ostream& operator<<(std::ostream& out, const Data &a) {
    out << "Name is " << a.name << "! Age is " << a.age
        << "! Profession is " << a.profession << "!";
    return (out);
}

int main() {
    uintptr_t raw;
    Data *ptr;


    Data Mariy;
    Mariy.name = "Mariy";
    Mariy.age = 20;
    Mariy.profession = "nurse";
    std::cout << Mariy << std::endl;
    raw = serialize(&Mariy);
    std::cout << "Raw = " << raw << std::endl;
    ptr = deserialize(raw);
    std::cout << *ptr << std::endl;
    std::cout << "Pointer of Mariy = " << &Mariy << std::endl;
    std::cout << "Pointer of ptr = " << ptr << std::endl;
}
