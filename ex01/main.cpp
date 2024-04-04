/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:34:09 by jerperez          #+#    #+#             */
/*   Updated: 2024/04/04 11:15:12 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cstdlib>

Zombie*	zombieHorde(int N, std::string name);

int	main(int ac, char **av)
{
	int			N;
	std::string	name;
	Zombie		*horde;

	if (3 != ac)
	{
		std::cout << "main: error: please enter [N] [name]" << std::endl;
		return (1);
	}
	N = std::atoi(av[1]);
	if (1 > N)
	{
		std::cout << "main: error: N must be > 0" << std::endl;
		return (1);
	}
	name = av[2];
	std::cout << std::endl << "zombieHorde (heap allocation):" << std::endl;
	horde = zombieHorde(N, name);
	std::cout << "announce:" << std::endl << std::endl;
	for (int k = 0; k < N; k++)
		horde[k].announce();
	delete[] horde;
	return (0);
}