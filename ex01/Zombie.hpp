/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:34:16 by jerperez          #+#    #+#             */
/*   Updated: 2024/04/04 13:13:41 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

# define Z_MSG ": BraiiiiiiinnnzzzZ..."
# define D_DST "debug: destructor called for "
# define D_CL0 "\033[33m"
# define D_CLN "\033[0m"

class Zombie
{
	public:
		Zombie(void);
		Zombie(std::string);
		~Zombie(void);
		Zombie& operator=(const Zombie&);
		void		announce(void);
		void		setName(std::string);
	private:
		std::string	_name;
};

#endif