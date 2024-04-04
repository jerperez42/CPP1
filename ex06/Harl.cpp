/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 13:34:33 by jerperez          #+#    #+#             */
/*   Updated: 2024/02/09 15:59:55 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"
# include "Harl.h"
# include <iostream>

void	Harl::debug(void)
{
	std::cerr << "[ " << LVL_DEBUG << " ]" << std::endl;
	std::cerr << MSG_DEBUG << std::endl << std::endl;
}

void	Harl::info(void)
{
	std::cerr << "[ " << LVL_INFO << " ]" << std::endl;
	std::cerr << MSG_INFO << std::endl << std::endl;
}

void	Harl::warning(void)
{
	std::cerr << "[ " << LVL_WARNING << " ]" << std::endl;
	std::cerr << MSG_WARNING << std::endl << std::endl;
}

void	Harl::error(void)
{
	std::cerr << "[ " << LVL_ERROR << " ]" << std::endl;
	std::cerr << MSG_ERROR << std::endl << std::endl;
}

void	Harl::complain(std::string level)
{
	typedef void (Harl::*t_ptr_mem)(void);

	const t_ptr_mem		farr[LVL_NUM] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	const std::string	narr[LVL_NUM] = {LVL_DEBUG, LVL_INFO, LVL_WARNING, LVL_ERROR};

	for (int i = 0; i < LVL_NUM; i++)
	{
		if (level == narr[i])
			return ((this->*farr[i])());
	}
}
