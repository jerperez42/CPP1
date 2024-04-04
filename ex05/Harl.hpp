/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 13:34:33 by jerperez          #+#    #+#             */
/*   Updated: 2024/02/09 15:10:20 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>

class Harl
{
	public:
		void	complain(std::string);
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};
