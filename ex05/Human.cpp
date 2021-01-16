# include "Human.hpp"
# include "Brain.hpp"

Human::Human(){};
Human::~Human(){};

const Brain	Human::getBrain() const
{
	return (this->brain);
}

string			Human::identify() const
{
	return (this->brain.identify());
}
