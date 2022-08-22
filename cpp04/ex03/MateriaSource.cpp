#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : countLearned(0) {
    for (int i = 0; i < MateriaSource::material_size; i++)
        this->material[i] = NULL;
    std::cout << "Default constructor for MaterialSource called" << std::endl;
    return ;
}

MateriaSource::MateriaSource(const MateriaSource &rsh) {
    *this = rsh;
    std::cout << "Copy constructor for MaterialSource called" << std::endl;
    return ;
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < MateriaSource::material_size; i++)
    {
        if (this->material[i])
            delete this->material[i];
    }
    std::cout << "Destructor for MaterialSource called" << std::endl;
    return ;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &obj) {
    for (int i = 0; i < MateriaSource::material_size; i++)
    {
        if (this->material[i])
            delete this->material[i];
        if (obj.material[i])
            this->material[i] = obj.material[i]->clone();
        else
            this->material[i] = NULL;
    }
    std::cout << "Assignement operator for MaterialSource called" << std::endl;
    return *this;
}

void MateriaSource::learnMateria(AMateria *materia) {
    if (this->countLearned >= MateriaSource::material_size)
        std::cout << "Can`t learn any more materials" << std::endl;
    else
    {
        this->material[this->countLearned] = materia;
        this->countLearned++;
        std::cout << "Learned " << materia->getType() << " Materia" << std::endl;
    }
}

AMateria *MateriaSource::createMateria(const std::string &type) {
    for (int i = 0; i < MateriaSource::material_size && this->material[i]; i++)
    {
        if (type == this->material[i]->getType())
            return this->material[i]->clone();
    }
    return NULL;
}

void MateriaSource::printMaterias() const {
    for (int i = 0; i < MateriaSource::material_size; i++)
    {
        if (this->material[i])
            std::cout << i << ": " << this->material[i]->getType() << std::endl;
        else
            std::cout << i << ": Empty" << std::endl;
    }
}