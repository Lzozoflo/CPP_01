/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 16:07:43 by fcretin           #+#    #+#             */
/*   Updated: 2025/04/25 16:43:29 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name )
{
	_name = name;
	std::cout << BLUE << "Construction of a Zombie named: " << _name << RESET << std::endl;
}

Zombie::~Zombie( void )
{
	std::cout << YELLOW << "Headshot!! " << _name << " has been slain." << RESET << std::endl;
}




/*---------------constructor-------------destructor----------------*/




void	Zombie::announce( void )
{
	if (_name == "Foo"){

		std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;

	}else{

		std::cout << "<" << _name << ">: BraiiiiiiinnnzzzZ..." << std::endl;

	}
}
