/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:34:16 by jerperez          #+#    #+#             */
/*   Updated: 2024/02/07 16:27:56 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

# define Z_MSG ": BraiiiiiiinnnzzzZ..."
# define D_DST "mdebug: destructor called for "
# define D_CL0 "\033[33"
# define D_CLN "\033[0m"

class Zombie
{
	public:
		Zombie(void);
		Zombie(std::string);
		~Zombie(void);
		void		announce(void);
	private:
		std::string	_name;
};

#endif