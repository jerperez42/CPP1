/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:36:54 by jerperez          #+#    #+#             */
/*   Updated: 2024/02/08 12:15:34 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.h"
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
		this->_name = name;
		this->_weapon = &weapon;
}

void	HumanA::attack(void)
{
	std::cout 	<< this->_name << HUMAN_A_AT << this->_weapon->getType()
				<< std::endl;
}

HumanA::~HumanA(void)
{
	std::cout	<< HUMAN_A_C0 << HUMAN_A_DR << this->_name << HUMAN_A_CN
				<< std::endl;
}
