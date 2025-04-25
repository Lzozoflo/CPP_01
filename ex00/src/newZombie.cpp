

#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	try
	{
		return new Zombie(name);
	}
	catch(std::bad_alloc& e)
	{
		std::cerr << "Allocation failed: " << e.what() << std::endl;
		return (NULL);
	}
}
