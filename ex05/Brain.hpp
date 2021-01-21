#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>
# include <sstream>

class	Brain
{
	private:
		std::string	color;
		std::string	addr;
	public:
		std::string	identify() const;
		Brain();
		~Brain();
};

#endif
