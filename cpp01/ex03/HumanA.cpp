#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon_a) : name(name) , weapon_a(weapon_a)
{
}

HumanA::~HumanA()
{
}

void    HumanA::attack()
{
    std::cout << name << " attacks whith their weapon " 
                    << weapon_a.getType() << std::endl;
}