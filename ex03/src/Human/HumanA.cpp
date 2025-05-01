/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 13:09:45 by fcretin           #+#    #+#             */
/*   Updated: 2025/05/01 12:10:49 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanA.hpp"


/*---------------constructor-------------destructor----------------*/


HumanA::HumanA( std::string name, Weapon &type ) : _Name(name), _Weapon(type)
{
	std::cout	<< BLUE << "Constructor of HumanA named: " << this->_Name
				<< " with a Weapon: " << this->_Weapon.getType() << RESET << std::endl;
}

HumanA::~HumanA( void )
{
	std::cout << YELLOW << "Destructor of HumanA named: " << this->_Name << RESET << std::endl;
}


/*---------------constructor-------------destructor----------------*/


/*----func----*/


// <name> attacks with their <weapon type>

void	HumanA::attack()
{
	std::cout << this->_Name << " attacks with their " << this->_Weapon.getType() << std::endl;
}


/*----func----*/
