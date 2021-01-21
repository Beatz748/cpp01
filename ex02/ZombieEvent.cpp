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
	Zombie	*zomb;
	std::string	names[] = {"lmireya", "jtambra", "smatha"};
	srand(time(NULL));
	zomb = new Zombie(names[rand() % 3], this->type);
	zomb->announce();
	return (zomb);
}
