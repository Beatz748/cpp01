#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

using	std::string;

class Zombie
{
	private:
		string	name;
		string	type;
	public:
		Zombie();
		Zombie(string name, string type);
		~Zombie();
	void	announce();
};

#endif
