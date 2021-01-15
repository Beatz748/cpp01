# include "ZombieEvent.hpp"
# include "Zombie.hpp"
# include <cstdlib>

Zombie*	ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(name, this->type));
}

void	ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}

Zombie*	ZombieEvent::randomChump()
{
	string	names[] = {"lmireya", "jtambra", "smatha"};
	srand(time(0));
	return (new Zombie(names[rand() % 3], this->type));
}
