/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 09:22:25 by fcretin           #+#    #+#             */
/*   Updated: 2025/04/26 10:51:11 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

#include <iostream>

Harl::Harl( void )
{

	std::cout << BLUE << "Contructor is Called" << RESET << std::endl;

}


Harl::~Harl( void )
{

	std::cout << YELLOW << "Destructor is Called" << RESET << std::endl;

}



/*---------------constructor-------------destructor----------------*/



void Harl::complain( std::string level )
{
	int	i;
	std::cout << BLUE <<  "complain func is Called" << RESET << std::endl;

	void (Harl::*functptr[])() = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	std::string tab[] = { "debug", "info", "warning", "error" };

	for (i = 0; level != tab[i] && i <= 3; ++i)
		;
	if (level != tab[i]){
		std::cerr << RED << "no level: " << level << RESET << std::endl;
		return ;
	}
	(this->*functptr[i])();
}


void Harl::debug( void )
{

	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
	std::cout << std::endl;
}


void Harl::info( void )
{

	std::cout << "[ INFO ]" << std::endl;
	std::cout << "You didn’t put enough bacon in my burger!" << std::endl;
	std::cout << std::endl;
}


void Harl::warning( void )
{

	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
	std::cout << std::endl;
}


void Harl::error( void )
{

	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}


