/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 11:06:45 by fcretin           #+#    #+#             */
/*   Updated: 2025/04/25 13:03:49 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (void)
{
	std::string str = "HI THIS IS BRAIN";

	std::string *strPTR = &str;
	std::string &strREF = str;

	std::cout << "ptr: " << strPTR << std::endl;
	std::cout << "ref: " << &strREF << std::endl;

	std::cout << std::endl;

	std::cout << "ptr: " << *strPTR << std::endl;
	std::cout << "ref: " << strREF << std::endl;

	return (0);
}
