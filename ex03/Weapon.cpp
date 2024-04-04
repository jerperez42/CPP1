/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:36:54 by jerperez          #+#    #+#             */
/*   Updated: 2024/02/08 11:42:16 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "Weapon.h"

Weapon::Weapon(void)
{
	;
}

Weapon::Weapon(std::string type)
{
	this->_type = type;
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}

std::string	&Weapon::getType(void)
{
	return (this->_type);
}

Weapon::~Weapon(void)
{
	std::cout	<< WEAPON_C0 << WEAPON_DR << this->_type << WEAPON_CN
				<< std::endl;
}

Weapon &Weapon::operator=(const Weapon& other)
{
	if (this == &other)
		return *this;
	this->_type = other._type;
	return *this;
}
