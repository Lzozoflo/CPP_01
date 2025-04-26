/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 09:32:37 by fcretin           #+#    #+#             */
/*   Updated: 2025/04/26 10:38:34 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl	TheH;
	switch (ac)
	{
		case 2:
			break;
		default:
			std::cerr << RED << "Wrong number of Argument" << RESET << std::endl;
			return 1;
	}
	TheH.complain(av[1]);
	return 0;
}
