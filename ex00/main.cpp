/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:34:09 by jerperez          #+#    #+#             */
/*   Updated: 2024/02/07 16:21:21 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	randomChump(std::string name);
Zombie*	newZombie(std::string name);

int	main(int ac, char **av)
{
	if (1 == ac)
	{
		std::cout << "debug: please enter a few names" << std::endl;
		return (1);
	}
	std::cout << std::endl << "randomChump (stack allocation):" << std::endl << std::endl;
	for (int k = 1; k < ac; k++)
		randomChump(av[k]);
	std::cout << std::endl << "newZombie (heap allocation):" << std::endl << std::endl;
	for (int k = 1; k < ac; k++)
	{
		Zombie *ptr_zombie = newZombie(av[k]);
		if (!ptr_zombie)
			std::cout << "debug: heap alloc failed for:" << av[k] << std::endl;
		else
		{
			ptr_zombie->announce();
			delete ptr_zombie;
		}
	}
	std::cout << std::endl;
	return (0);
}