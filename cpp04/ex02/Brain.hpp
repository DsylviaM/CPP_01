#ifndef CPP04_BRAIN_H
#define CPP04_BRAIN_H

#include <string>
#include <iostream>

class Brain {
private:
    static const int ideasCount = 100;
public:
    Brain();
    Brain(const Brain& obj);
    Brain& operator=(const Brain& rhs);
    ~Brain();
    void setIdea(std::string ideas, int ideasCount);
    std::string getIdea(int ideasCount) const;
    std::string ideas[Brain::ideasCount];

    void printIdeas() const;
};


#endif
