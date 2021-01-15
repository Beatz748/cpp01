# include "Pony.hpp"

void	pony_on_heap()
{
	Pony	*pony;

	pony = new Pony("Jenya", 23, "man");
	pony->call_name();
	std::cout << "i am on heap" << std::endl;
	pony->do_something();
	pony->age_sex();
	pony->do_something();
	delete(pony);
}

void	pony_on_stack()
{
	Pony	pony("Adrey", 16, "man");

	pony.call_name();
	std::cout << "i am on stack" << std::endl;
	pony.do_something();
	pony.do_something();
}

int	main()
{
	std::cout << "Creating Pony on stack" << std::endl;
	pony_on_stack();
	std::cout << "This is the end for Pony on stack" << std::endl;
	std::cout << "Creating Pony on heap" << std::endl;
	pony_on_heap();
	std::cout << "This is the end for Pony on heap" << std::endl;
}
