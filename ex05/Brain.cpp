# include "Brain.hpp"

Brain::Brain()
{
	std::stringstream addr;

	addr << this;
	this->addr = addr.str();
}
Brain::~Brain(){}

std::string	Brain::identify() const
{
	return (this->addr);
}
