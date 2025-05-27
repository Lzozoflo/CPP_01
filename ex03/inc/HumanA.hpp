/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 13:09:47 by fcretin           #+#    #+#             */
/*   Updated: 2025/05/14 09:43:34 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef	HUMANA_HPP
# define	HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	private:
	// {

		std::string	_Name;
		Weapon		&_Weapon;

	// }
	public:
	// {

		HumanA( std::string name, Weapon &type );
		~HumanA( void );
		void	attack();

	// }
};


# endif
