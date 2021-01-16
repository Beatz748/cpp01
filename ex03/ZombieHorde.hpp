#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"

class ZombieHorde
{
	private:
		Zombie	*Horde;
		int		num;
	public:
		ZombieHorde(int N);
		~ZombieHorde();
		void	announce();
};

#endif
