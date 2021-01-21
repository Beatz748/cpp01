#include "Pony.hpp"

Pony::Pony(std::string n, int a, std::string s)
{
	this->name = n;
	this->age = a;
	this->sex = s;
}

Pony::~Pony(){}

void	Pony::call_name()
{
	std::cout << "My name - " << this->name << std::endl;
}

void	Pony::age_sex()
{
	std::cout << "My age - " << this->age << std::endl;
	std::cout << "My sex - " << this->sex << std::endl;
}

void	Pony::do_something()
{
	std::cout << "i don't know what to do )=" << std::endl;
}
