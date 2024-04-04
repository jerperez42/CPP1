/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:49:20 by jerperez          #+#    #+#             */
/*   Updated: 2024/04/04 11:17:52 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <vector>

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie	*horde = new Zombie[N];

	horde[0] = Zombie(name);
	for (int i = 1; i < N; i++)
		horde[i] = horde[0];
	return (horde);
}