/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 13:09:47 by fcretin           #+#    #+#             */
/*   Updated: 2025/05/14 09:43:36 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef	HUMANB_HPP
# define	HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:
	// {

		std::string _Name;
		Weapon 		*_Weapon;
		bool		_Hand;

	// }
	public:
	// {

		HumanB( std::string name );
		~HumanB( void );
		void	attack();
		void	setWeapon(Weapon &club);

		void	cutHand( void );

	// }
};











# endif
