/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 09:32:37 by fcretin           #+#    #+#             */
/*   Updated: 2025/04/26 10:08:09 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl	TheH;

	TheH.complain("error");
	TheH.complain("info");
	TheH.complain("warning");
	TheH.complain("idk");
	TheH.complain("debug");
}
