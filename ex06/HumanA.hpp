#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include "Weapon.hpp"
# include <iostream>

using   std::string;

class HumanA
{
    private:
        Weapon  &weapon;
        string  name;
    public:
        HumanA(string name, Weapon &weapon);
        ~HumanA();
        void    attack();
};

#endif