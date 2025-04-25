/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 11:06:45 by fcretin           #+#    #+#             */
/*   Updated: 2025/04/25 17:41:05 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN  "\033[32m"
#define BLUE  "\033[34m"
#define YELLOW "\033[33m"

int main(int ac, char **av)
{
	if (ac != 4){
		std::cerr << RED << "Not the required number of arguments" << RESET << std::endl;
		return (1);}
	std::ifstream	ifs(av[1]);
	std::string		line;
	std::string		str;

	while (std::getline(ifs , line))
	{
		str += line;
		str += "\n";
	}
	std::cout << str << std::endl;


	ifs.close();
	return 0;
}
