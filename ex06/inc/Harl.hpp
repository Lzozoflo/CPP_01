/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 09:22:26 by fcretin           #+#    #+#             */
/*   Updated: 2025/04/26 09:51:12 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HARL_HPP
#define	HARL_HPP

#include <iostream>
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN  "\033[32m"
#define BLUE  "\033[34m"
#define YELLOW "\033[33m"

class Harl
{
	private:
	// {

		void debug( void );
		void info( void );
		void warning( void );
		void error( void );

	// }
	public:
	// {


		Harl( void );
		~Harl( void );
		void complain( std::string level );

	// }
};


#endif
