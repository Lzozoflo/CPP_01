/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 11:20:34 by fcretin           #+#    #+#             */
/*   Updated: 2025/04/25 12:56:45 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	if (N <= 0)
		return NULL;
	try
	{
		Zombie *ZombieHordeptr = new Zombie[N];

		for (int i = 0; i < N; ++i)
			ZombieHordeptr[i].SetName(name);

		return ZombieHordeptr;
	}catch( std::bad_alloc& e){

		std::cerr << "Allocation failed: " << e.what() << std::endl;
		return NULL;
	}

}
