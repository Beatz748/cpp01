# include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
{
	this->name = name;
	this->type = type;
}

Zombie::~Zombie(){}

void	Zombie::get_name(std::string name, std::string type)
{
	this->name = name;
	this->type = type;
}

void	Zombie::announce()
{
	std::cout << this->name << ' '
				<< this->type
				<< ' '
				<< "Braiiiiiiinnnssss..."
				<< std::endl;
}
