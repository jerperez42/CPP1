/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:34:16 by jerperez          #+#    #+#             */
/*   Updated: 2024/02/08 11:27:31 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class Weapon
{
	public:
		Weapon(void);
		Weapon(std::string);
		~Weapon(void);
		std::string	&getType(void);
		void		setType(std::string);
		Weapon&		operator=(const Weapon&);
	private:
		std::string	_type;
};

#endif