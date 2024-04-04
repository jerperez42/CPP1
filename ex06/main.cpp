/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 13:34:33 by jerperez          #+#    #+#             */
/*   Updated: 2024/04/04 13:57:29 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "Harl.hpp"
# include "Harl.h"
# include <iostream>

static void	_harl_unknown(void)
{
	std::cerr	<< "[ Probably complaining about insignificant problems ]"
				<< std::endl;
}

static int	_leveltoi(std::string level)
{
	const std::string	name[LVL_NUM] = {LVL_DEBUG, LVL_INFO, LVL_WARNING, LVL_ERROR};
	int					i;

	i = 0;
	while (level != name[i] && i < LVL_NUM)
		i++;
	return (i);
}

int	main(int ac, char **av)
{
	Harl				harl;
	int					level;

	level = (2 == ac) ? _leveltoi(av[1]) : LVL_NUM;
	switch (level)
	{
		case (0):
			harl.complain(LVL_DEBUG);
		case (1):
			harl.complain(LVL_INFO);
		case (2):
			harl.complain(LVL_WARNING);
		case (3):
			harl.complain(LVL_ERROR);
			break;
		case (LVL_NUM):
			_harl_unknown();
	}
}