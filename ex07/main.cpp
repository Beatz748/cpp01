# include <string>
# include <iostream>
# include <fstream>
# include <cerrno>

using   std::string;
using   std::cout;
using   std::endl;
using   std::ifstream;
using   std::ofstream;
using   std::getline;
using   std::cin;
using   std::filebuf;

int    sed(string filename, string s1, string s2)
{
    ifstream    input;
    ofstream    output;
    string      str;
    int         i;
    
    input.open(filename);
    filename+= ".repalce";
    output.open(filename);
    if (!input || !output || !input.is_open() || !output.is_open())
    {
        cout << "can u enter filename normally?!" << endl;
        return (21);
    }
    while (getline(input, str))
    {
        while ((i = str.find(s1)) != str.npos)
            str.replace(i, s2.length(), s2);
        output << str;
        if (i == str.npos)
            output << endl;
    }
    input.close();
    output.close();
    return (0);
}

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        cout << "nice u r 🤡 " << endl;
        return (42);
    }
    return (sed(argv[1], argv[2], argv[3]));
}