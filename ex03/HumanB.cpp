/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:36:54 by jerperez          #+#    #+#             */
/*   Updated: 2024/02/08 12:12:04 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.h"
#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->_weapon = NULL;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void	HumanB::attack(void)
{
	if (NULL != this->_weapon)
	{
		std::cout 	<< this->_name << HUMAN_B_AT << this->_weapon->getType()
					<< std::endl;
	}
	else
		std::cout 	<< this->_name << HUMAN_B_A0 << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout	<< HUMAN_B_C0 << HUMAN_B_DR << this->_name << HUMAN_B_CN
				<< std::endl;
}
