/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 13:34:33 by jerperez          #+#    #+#             */
/*   Updated: 2024/02/09 15:29:04 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "Harl.hpp"
# include "Harl.h"

int	main(int ac, char **av)
{
	Harl		harl;

	harl.complain(LVL_DEBUG);
	harl.complain(LVL_INFO);
	harl.complain(LVL_WARNING);
	harl.complain(LVL_ERROR);
	for (int i = 1; i < ac; i++)
		harl.complain(av[i]);;
}