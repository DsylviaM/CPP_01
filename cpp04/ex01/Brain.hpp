#ifndef CPP04_BRAIN_H
#define CPP04_BRAIN_H

#include <string>
#include <iostream>

class Brain {
private:
    std::string ideas[100];
public:
    Brain();
    Brain(const Brain& obj);
    Brain& operator=(const Brain& rhs);
    ~Brain();
    void setIdea(std::string ideas, int ideasCount);
    std::string getIdea(int ideasCount) const;

    void printIdeas() const;
};


#endif
