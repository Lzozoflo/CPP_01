/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 11:06:45 by fcretin           #+#    #+#             */
/*   Updated: 2025/05/01 11:47:24 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

void randomChump( std::string name );
Zombie* newZombie( std::string name );

int main (void)
{

	Zombie *Zombieptr = newZombie("flo");
	if (Zombieptr == NULL)
		return (1);
	Zombieptr->announce();
	delete Zombieptr;


	randomChump("Foo");
	return (0);
}
