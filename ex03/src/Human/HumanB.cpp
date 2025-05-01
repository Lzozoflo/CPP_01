/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 13:09:46 by fcretin           #+#    #+#             */
/*   Updated: 2025/05/01 12:13:58 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


/*---------------constructor-------------destructor----------------*/


HumanB::HumanB( std::string name ) :  _Name(name), _Weapon(NULL), _Hand(true)
{

	std::cout << BLUE << "Constructor of HumanB named: " << this->_Name << " with a Weapon: NULL/Hand"  << RESET << std::endl;

}

HumanB::~HumanB( void )
{

	std::cout << YELLOW << "Destructor of HumanB named: " << this->_Name << RESET << std::endl;

}


/*---------------constructor-------------destructor----------------*/


/*----func----*/


// <name> attacks with their <weapon type>

void	HumanB::attack()
{
	if (this->_Weapon == NULL)
	{
		if (this->_Hand == false)
			std::cerr << RED << this->_Name << " attacks with their " << "Feet like a not hands-free" << RESET << std::endl;
		else
			std::cerr << RED << this->_Name << " attacks with their " << "Hand like a boss" << RESET << std::endl;

	}
	else
	{
		if (this->_Hand == false)
		{
			std::cout << RED << this->_Name << " can take a weapon without hand so " << this->_Name << " attacks with their Feet like a not hands-free" << std::endl;
		}
		else
			std::cout << this->_Name << " attacks with their " << this->_Weapon->getType() << std::endl;
	}
}


void	HumanB::setWeapon(Weapon &club)
{
	this->_Weapon = &club;
}


void	HumanB::cutHand( void )
{
	std::cout << RED << this->_Name << " grip on a chainsaw lost Hands" << RESET << std::endl;
	this->_Hand = false;
}


/*----func----*/
