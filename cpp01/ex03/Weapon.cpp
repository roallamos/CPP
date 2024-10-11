#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string type)
{
    Weapon::setType(type);
}

Weapon::~Weapon()
{
}

const std::string &Weapon::getType()
{
    return (type);
}

void    Weapon::setType(std::string type)
{
    this->type = type;
}