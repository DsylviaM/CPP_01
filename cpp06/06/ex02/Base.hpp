#ifndef BASE_HPP
#define BASE_HPP

#include "iostream"

class Base {
public:
    virtual ~Base() {
        std::cout << "Base destroyed!" << std::endl;
    }
};

class A : public Base {
public:
    virtual ~A() {
        std::cout << "A destroyed!" << std::endl;
    };
};

class B : public Base {
        public:
        virtual ~B() {
            std::cout << "B destroyed!" << std::endl;
        };
};

class C : public Base {
        public:
        virtual ~C() {
            std::cout << "C destroyed!" << std::endl;
        };
};

Base* generate(void);
void identify(Base* p);
void identify(Base& p);

#endif
