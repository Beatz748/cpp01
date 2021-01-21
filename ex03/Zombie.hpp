#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
	private:
		std::string	name;
		std::string	type;
	public:
		Zombie(){name = ""; type = "";};
		Zombie(std::string name, std::string type);
		~Zombie();
	void	get_name(std::string name, std::string type);
	void	announce();
};

#endif
