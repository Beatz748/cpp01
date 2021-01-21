#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include <string>
# include <iostream>
# include "Zombie.hpp"

class ZombieEvent
{
	private:
		std::string	type;
	public:
			ZombieEvent(){type = "no type";};
		Zombie*	newZombie(std::string name);
		void	setZombieType(std::string type);
		Zombie*	randomChump();
};

#endif
