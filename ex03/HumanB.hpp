/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 10:39:13 by jerperez          #+#    #+#             */
/*   Updated: 2024/02/08 12:11:20 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string);
		~HumanB(void);
		void	setWeapon(Weapon &);
		void	attack(void);
	private:
		std::string	_name;
		Weapon		*_weapon;
};

#endif