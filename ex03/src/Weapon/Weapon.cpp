/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 13:09:42 by fcretin           #+#    #+#             */
/*   Updated: 2025/04/25 16:42:08 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ) : _type(type)
{
	std::cout << BLUE << "Constructor of Weapon type: " << type << RESET << std::endl;
}

Weapon::Weapon( void ) : _type("N/a")
{
	std::cout << BLUE << "Constructor of Weapon" << RESET << std::endl;
}

Weapon::~Weapon( void )
{
	std::cout << YELLOW << "Destructor of Weapon" << RESET << std::endl;
}




/*---------------constructor-------------destructor----------------*/


void				Weapon::setType( std::string newtype)
{
	_type = newtype;
}


const std::string	&Weapon::getType( void ) const
{
	return (_type);
}

