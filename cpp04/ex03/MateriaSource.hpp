#ifndef CPP04_MATERIASOURCE_H
#define CPP04_MATERIASOURCE_H

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
private:
    const static int material_size = 4;
    AMateria *material[MateriaSource::material_size];
    int countLearned;
public:
    MateriaSource();
    MateriaSource(const MateriaSource &rsh);
    ~MateriaSource();
    MateriaSource &operator=(const MateriaSource &obj);

    virtual void learnMateria(AMateria *materia);
    virtual AMateria *createMateria(std::string const & type);

    void printMaterias() const ;
};


#endif
