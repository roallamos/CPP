#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::~Weapon()
{
}

std::string &Weapon::getType() const
{
    return (type);
}

void    Weapon::setType(std::string &type)
{
    this->type = type;
}