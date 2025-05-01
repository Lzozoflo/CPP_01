/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 11:44:23 by fcretin           #+#    #+#             */
/*   Updated: 2025/05/01 11:47:06 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	try
	{
		return new Zombie(name);
	}
	catch(std::bad_alloc& e)
	{
		std::cerr << RED << "Allocation failed: " << e.what() << RESET << std::endl;
		return (NULL);
	}
}
