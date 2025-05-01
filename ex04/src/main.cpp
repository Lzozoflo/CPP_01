/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 11:06:45 by fcretin           #+#    #+#             */
/*   Updated: 2025/05/01 12:16:17 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN  "\033[32m"
#define BLUE  "\033[34m"
#define YELLOW "\033[33m"


std::string replaceString(std::string original, const std::string& toReplace, const std::string& replacement)
{
	size_t pos = 0;

	// .find find the first occurrence of "toReplace"
	// == npos its when ".find" say no more "toReplace" here
	while ((pos = original.find(toReplace, pos)) != std::string::npos)
	{
		// Replace the substring
		original.erase(pos, toReplace.length());
		original.insert(pos, replacement);

		// add the len of replacement for the infinity loop
		pos += replacement.length();
	}

	return original;
}

int main(int ac, char **av)
{
	if (ac != 4){
		std::cerr << RED << "Not the required number of arguments" << RESET << std::endl;
		return (1);
	}

	// fd of the file
	std::ifstream	ifs(av[1]);
	if (!ifs.is_open()){
		std::cerr << RED << "Error on: " << av[1] << RESET << std::endl;
		return (1);
	}
	std::string		line;
	std::string		str;

	// get line by line
	while (std::getline(ifs , line))
	{
		//replace and add line by line + a \n
		str += replaceString(line, av[2], av[3]);
		str += "\n";
	}
	std::cout << str << std::endl;


	ifs.close();
	return (0);
}
