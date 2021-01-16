# include <string.h>
# include <iostream>

int	main()
{
	std::string	str = "hi";
	std::string	*pointer = &str;
	std::string	&ref = str;
	std::string lol = "lol";

	std::cout << "ADDRESS OF MAIN STR - " << &str << std::endl;
	std::cout << "ADDRESS OF POINTER - " << pointer << std::endl;
	std::cout << "ADDRESS OF REFERENCE - " << &ref << std::endl;
	std::cout << "MAIN STR - " << str << std::endl;
	std::cout << "POINTER - " << *pointer << std::endl;
	std::cout << "REFERENCE - " << ref << std::endl;
}
