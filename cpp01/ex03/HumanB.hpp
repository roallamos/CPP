#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
private:
    Weapon weapon_b;
    std::string name;
public:
    HumanB(std::string);
    ~HumanB();
    void    attack();
    void    setWeapon(Weapon);
};

#endif