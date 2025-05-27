/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 11:06:45 by fcretin           #+#    #+#             */
/*   Updated: 2025/05/27 08:59:22 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main(void)
{
	int N = 3;

	Zombie *ZombieHordeptr = zombieHorde( N, "Foo" );
	if (ZombieHordeptr == NULL)
		return (1);

	for (int i = 0; i < N; ++i)
		ZombieHordeptr[i].announce();

	delete [] ZombieHordeptr;
	return (0);
}
