#ifndef CASTER_HPP
#define CASTER_HPP

#include "iostream"
#include "string"
#include "limits"

enum types{
    NONE,
    SPECIAL,
    CHAR,
    INT,
    FLOAT,
    DOUBLE
};

class Caster {
private:
    std::string value;
    int type;
    char c;
    double num;
public:
    Caster(std::string value);
    Caster(const Caster &a);
    Caster& operator=(const Caster& a);
    ~Caster();
    int findType() const;
    bool isChar() const;
    bool isInt() const;
    bool isFloat() const;
    bool isDouble() const;
    bool isSpecial() const;
    bool isFloatSpec() const;
    void printChar() const;
    void printInt() const;
    void printFloat() const;
    void printDouble();
    void printSpecial() const;
};


#endif
