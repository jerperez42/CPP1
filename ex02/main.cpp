/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 17:47:22 by jerperez          #+#    #+#             */
/*   Updated: 2024/04/04 13:20:11 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> 
#include <string> 

int	main(int ac, char **av)
{
	std::string	str("HI THIS IS BRAIN");
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	(void)ac;
	(void)av;
	std::cout << "&str:\t\t" << &str << std::endl;
	std::cout << "stringPTR:\t" << stringPTR << std::endl;
	std::cout << "&stringREF:\t" << &stringREF << std::endl;
	std::cout << "str:\t\t" << str << std::endl;
	std::cout << "*stringPTR:\t" << *stringPTR << std::endl;
	std::cout << "stringREF:\t" << stringREF << std::endl;
}