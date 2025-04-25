/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 13:09:45 by fcretin           #+#    #+#             */
/*   Updated: 2025/04/25 16:42:08 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &type ) : _name(name), _weapon(type)
{

	std::cout << BLUE << "Constructor of HumanA named: " << _name << " with a Weapon: " << _weapon.getType() <<RESET << std::endl;


}

HumanA::~HumanA( void )
{

	std::cout << YELLOW << "Destructor of HumanA named: " << _name << RESET << std::endl;

}




/*---------------constructor-------------destructor----------------*/



// <name> attacks with their <weapon type>
void	HumanA::attack()
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
