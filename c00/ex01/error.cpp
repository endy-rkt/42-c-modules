/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 14:50:06 by trazanad          #+#    #+#             */
/*   Updated: 2024/12/01 06:18:28 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

int	is_empty(std::string str)
{
	int	emptyNb;
	int	strLen;

	if (str.empty())
		return (1);
	emptyNb = 0;
	strLen = str.length();
	for (int i = 0; i < strLen; i++)
	{
		if ((str[i] >= '\a' && str[i] <= '\r') || str[i] == ' ')
			emptyNb++;
	}
	if (emptyNb == strLen)
		return (1);
	return (0);
}

std::string	get_input(std::string msg)
{
	std::string	input;

	std::cout << msg;
	std::getline(std::cin, input);
	if (std::cin.eof())
		std::cout << "Input can't be empty. " << msg;
	while (is_empty(input))
	{
		std::cout << "Input can't be empty. " << msg;
		std::getline(std::cin, input);
		if (std::cin.eof())
			std::cout << "Input can't be empty. " << msg;
	}
	return (input);
}

int	is_number(std::string str)
{
	for (int i = 0; i < (int)str.length(); i++)
	{
		if (!isdigit(str[i]))
			return (0);
	}
	return (1);
}

int	get_number(std::string msg)
{
	int			number;
	std::string input;

	std::cout << msg;
	std::getline(std::cin, input);
	while (!is_number(input)) 
	{
		std::cout << "Invalid number input. " << msg;
		std::getline(std::cin, input);
	}
	number = atoi(input.c_str());
	return (number);
}

int	get_index(std::string msg)
{
	int			number;
	std::string input;

	std::cout << msg;
	std::getline(std::cin, input);
	number = atoi(input.c_str());
	while (!is_number(input) && (number >=0 && number <= 7)) 
	{
		std::cout << "Invalid number input. " << msg;
		std::getline(std::cin, input);
		number = atoi(input.c_str());
	}
	return (number);
}
