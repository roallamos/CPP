#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name)
{
}

HumanB::~HumanB()
{
}

void    HumanB::attack()
{
    std::cout << name << " attacks whith their weapon " 
                    << weapon_b.getType() << std::endl;
}

void    HumanB::setWeapon(Weapon Weapon_b)
{
    this->weapon_b = Weapon_b;
}