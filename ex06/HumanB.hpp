#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <string>
# include <iostream>

class HumanB
{
    private:
        string  name;
        Weapon  *weapon;
    public:
        HumanB(string name);
        ~HumanB();
        void    setWeapon(Weapon& weapon);
        void    attack();
};

#endif
