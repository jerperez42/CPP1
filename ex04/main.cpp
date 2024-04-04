/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 12:22:34 by jerperez          #+#    #+#             */
/*   Updated: 2024/02/09 13:32:42 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include <cstring>
#include <sstream>

int	ft_write(std::string text, const char *filename)
{
	std::ofstream		fout;

	fout.open(filename);
	if (!fout.is_open())
	{
		std::cerr << "Error: " << std::strerror(errno) << std::endl;
		return (1);
	}
	fout << text;
	fout.close();
	return (0);
}

void	ft_replace(std::string *text, std::string s1, std::string s2)
{
	size_t		pos;
	int			s1len;
	std::string	str;

	s1len = s1.length();
	while (0 != text->length())
	{
		pos = text->find(s1, 0);
		if (pos ==  text->npos)
		{
			str.append(*text);
			*text = "";
		}
		else
		{
			str.append(text->substr(0, pos)).append(s2);
			text->erase(0, pos + s1len);
		}
	}
	text->swap(str);
}

int	ft_read(char *filename, std::string *text)
{
	std::ifstream		fin;
	std::ostringstream	oss;

	fin.open(filename);
	if (!fin.is_open())
	{
		std::cerr << "Error: " << std::strerror(errno) << std::endl;
		return (1);
	}
	oss << fin.rdbuf();
	*text = oss.str();
	fin.close();
	return (0);
}

int	main(int ac, char **av)
{
	std::string	text;
	std::string	filename;

	if (4 != ac)
	{
		std::cerr << "Error: incorrect number of arguments" << std::endl;
		return (1);
	}
	if (!*av[2])
	{
		std::cerr << "Error: empty string to replace" << std::endl;
		return (1);
	}
	if (ft_read(av[1], &text))
		return (1);
	ft_replace(&text, av[2], av[3]);
	filename = std::string(av[1]).append(".replace");
	if (ft_write(text, filename.c_str()))
		return (1);
	return (0);
}