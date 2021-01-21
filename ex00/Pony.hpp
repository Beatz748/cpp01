#ifndef CLASSPONY_HPP
# define CLASSPONY_HPP

# include <string>
# include <iostream>

class Pony
{
	private:
		std::string	name;
		int		age;
		std::string	sex;

	public:
		Pony(std::string n, int a, std::string s);
		~Pony();
	void	call_name();
	void	age_sex();
	void	do_something();
};


#endif
