# include "ZombieEvent.hpp"
# include "Zombie.hpp"

int	main()
{
	ZombieEvent	event;
	Zombie		*zombie1;
	Zombie		*zombie2;

	event.setZombieType("bruh");
	zombie1 = event.randomChump();
	delete(zombie1);
	event.setZombieType("student");
	zombie2 = event.newZombie("Jenya");
	zombie2->announce();
	delete(zombie2);
}

