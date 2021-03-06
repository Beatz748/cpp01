# include <string>
# include <iostream>
# include <fstream>

int    sed(std::string filename, std::string s1, std::string s2)
{
	std::ifstream    input;
	std::ofstream    output;
	std::string      str;
    size_t         i;
    
	input.open(filename);
    filename+= ".replace";
    output.open(filename);
    if (s1.empty() || s2.empty() || !s1.compare(s2))
    {
		std::cout << "🙃" << std::endl;
        return (42);
    }
    if (!input || !output || !input.is_open() || !output.is_open())
    {
		std::cout << "can u enter filename normally?!" << std::endl;
        return (21);
    }
    while (std::getline(input, str))
    {
        while ((i = str.find(s1)) != str.npos)
            str.replace(i, s1.length(), s2);
        output << str;
        if (i == str.npos)
            output << std::endl;
    }
    input.close();
    output.close();
    return (0);
}

int main(int argc, char **argv)
{
    if (argc != 4)
    {
		std::cout << "nice u r 🤡 " << std::endl;
        return (42);
    }
    return (sed(argv[1], argv[2], argv[3]));
}
