#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>
# include <sstream>

using	std::string;

class	Brain
{
	private:
		int		iq;
		string	color;
		string	addr;
	public:
		string	identify() const;
		Brain();
		~Brain();
};

#endif
