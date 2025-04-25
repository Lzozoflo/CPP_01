/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 13:09:48 by fcretin           #+#    #+#             */
/*   Updated: 2025/04/25 16:43:38 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef		WEAPON_HPP
# define	WEAPON_HPP

#include <iostream>

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN  "\033[32m"
#define BLUE  "\033[34m"
#define YELLOW "\033[33m"

class Weapon
{
	private:
	// {

		std::string	_type;

	// }
	public:
	// {

		Weapon( void );
		Weapon( std::string type );
		~Weapon( void );

		void	setType( std::string newtype);
		const std::string		&getType( void ) const;

	// }
};



# endif
