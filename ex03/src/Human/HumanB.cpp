/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 13:09:46 by fcretin           #+#    #+#             */
/*   Updated: 2025/04/26 08:51:36 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) :  _name(name), _weapon(NULL), _Hand(true)
{

	std::cout << BLUE << "Constructor of HumanB named: " << _name << " with a Weapon: NULL/Hand"  << RESET << std::endl;

}

HumanB::~HumanB( void )
{

	std::cout << YELLOW << "Destructor of HumanB named: " << _name << RESET << std::endl;

}




/*---------------constructor-------------destructor----------------*/



// <name> attacks with their <weapon type>
void	HumanB::attack()
{
	if (_weapon == NULL)
	{
		if (_Hand == false)
			std::cerr << RED <<_name << " attacks with their " << "Feet like a not hands-free" << RESET << std::endl;
		else
			std::cerr << RED <<_name << " attacks with their " << "Hand like a boss" << RESET << std::endl;

	}
	else
	{
		if (_Hand == false)
		{
			std::cout << RED << _name << " can take a weapon without hand so " << _name << " attacks with their Feet like a not hands-free" << std::endl;
		}
		else
			std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	}
}

void	HumanB::setWeapon(Weapon &club)
{
	_weapon = &club;
}


void	HumanB::cutHand( void )
{
	std::cout << RED << _name << " grip on a chainsaw lost Hands" << RESET << std::endl;
	_Hand = false;
}
