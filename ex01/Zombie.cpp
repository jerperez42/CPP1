/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:36:54 by jerperez          #+#    #+#             */
/*   Updated: 2024/02/07 17:34:08 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// class Zombie
// {
// 	public:
// 		Zombie(std::string);
// 		void		announce(void);
// 	private:
// 		std::string	_name;
// };

Zombie::Zombie(void)
{
	;
}

Zombie& Zombie::operator=(const Zombie& other)
{
	if (this == &other)
		return *this;
	this->_name = other._name;
	return *this;
}

Zombie::Zombie(std::string name)
{
	this->_name = name;
}

Zombie::~Zombie(void)
{
	std::cout << D_CL0 << D_DST << this->_name << D_CLN << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << Z_MSG << std::endl;
}