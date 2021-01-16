#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

using   std::string;

class   Weapon
{
    private:
        string  type;
    public:
        const string&   getType();
        void            setType(string type);
        Weapon(string type);
        ~Weapon();
};

#endif