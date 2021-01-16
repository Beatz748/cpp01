# include "HumanB.hpp"

HumanB::HumanB(string name)
{
    this->name = name;
}

HumanB::~HumanB(){}

void    HumanB::attack()
{
    std::cout << this->name
                << " "
                << "attacks with his "
                << this->weapon->getType()
                << std::endl;
}

void    HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}
