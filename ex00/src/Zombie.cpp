/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 16:07:43 by fcretin           #+#    #+#             */
/*   Updated: 2025/05/01 11:44:37 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*---------------constructor-------------destructor----------------*/


Zombie::Zombie( std::string name ) : _Name(name)
{
	std::cout << BLUE << "Construction Zombie is Called named: " << this->_Name << RESET << std::endl;
}

Zombie::~Zombie( void )
{
	std::cout << YELLOW << "Headshot!! " << this->_Name << " has been slain. (Destructor Zombie is Called)" << RESET << std::endl;
}


/*---------------constructor-------------destructor----------------*/


/*----func----*/


void	Zombie::announce( void )
{
	if (this->_Name == "Foo"){
		std::cout << this->_Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	}else{
		std::cout << "<" << this->_Name << ">: BraiiiiiiinnnzzzZ..." << std::endl;
	}
}


/*----func----*/
