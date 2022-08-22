#include "Base.hpp"

Base* generate(void) {
    int i = rand();
    switch (i % 3) {
        case 1:
            return (new A);
        case 2:
            return (new B);
    }
    return (new C);
}

void identify(Base* p) {
    if (dynamic_cast<A*>(p))
        std::cout << "A class";
    else if (dynamic_cast<B*>(p))
        std::cout << "B class";
    else if (dynamic_cast<C*>(p))
        std::cout << "C class";
    else
        std::cout << "Error!";
    std::cout << std::endl;
}

void identify(Base& p) {
    try {
        (void)dynamic_cast<A&>(p);
        std::cout << "A class";
    }
    catch (std::exception &e) {
        try {
            (void)dynamic_cast<B&>(p);
            std::cout << "B class";
        }
        catch (std::exception &e) {
            try {
                (void)dynamic_cast<C&>(p);
                std::cout << "C class";
            }
            catch (std::exception &e) {
                std::cout << "Error";
            }
        }
    }
    std::cout << std::endl;
}
