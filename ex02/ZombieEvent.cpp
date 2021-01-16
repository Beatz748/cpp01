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
	string	names[] = {"lmireya", "jtambra", "smatha"};
	zomb = new Zombie(names[rand() % 3], this->type);
	zomb->announce();
	srand(time(NULL));
	return (zomb);
}
