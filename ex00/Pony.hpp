#ifndef CLASSPONY_HPP
# define CLASSPONY_HPP

# include <string>
# include <iostream>

using	std::string;

class Pony
{
	private:
		string	name;
		int		age;
		string	sex;

	public:
		Pony(string n, int a, string s);
		~Pony();
	void	call_name();
	void	age_sex();
	void	do_something();
};


#endif
