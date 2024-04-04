/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 13:34:33 by jerperez          #+#    #+#             */
/*   Updated: 2024/02/09 15:59:42 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "Harl.hpp"
# include "Harl.h"
# include <iostream>

void	ft_main_harl_unknown(void)
{
	std::cerr	<< "[ Probably complaining about insignificant problems ]"
				<< std::endl;
}

int	main_leveltoi(std::string level)
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

	level = (2 == ac) ? main_leveltoi(av[1]) : LVL_NUM;
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
			ft_main_harl_unknown();
	}
}