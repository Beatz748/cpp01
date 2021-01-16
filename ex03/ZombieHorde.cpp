# include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
	std::string	names[] = {"Aaron", "Abraham", "Adam", "Adrian", "Aidan", "Alan", "Albert", "Alejandro", "Alex", "Alexander", "Alfred", "Andrew", "Angel", "Anthony", "Antonio", "Ashton", "Austin"};
	int			i;
	std::string	type[] = {"Runners", "Voodoo Zombie", "Romero Zombies", "Type A Necro-Mortosis Zombies", "Crawlers"};

	i = -1;
	this->num = N;
	srand(time(NULL));
	this->Horde = new Zombie[N];
	while(++i < N)
	{
		this->Horde[i].get_name(names[rand() % 17], type[rand() % 5]);
	}
}
ZombieHorde::~ZombieHorde()
{
	delete[] this->Horde;
	std::cout << "Horde deleted" << std::endl;
}
void	ZombieHorde::announce()
{
	int	i;

	i = -1;
	while(++i < this->num)
		this->Horde[i].announce();
}
