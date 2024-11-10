/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 14:50:06 by trazanad          #+#    #+#             */
/*   Updated: 2024/11/09 15:32:20 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

int	is_empty(std::string str)
{
	for (int i = 0; i < (int)str.length(); i++)
	{
		if ((str[i] >= '\a' && str[i] <= '\r') || str[i] == ' ')
			return (1);
	}
	return (0);
}

std::string	get_input(std::string msg)
{
	std::string	input;

	std::cout << msg;
	std::cin >> input;
	while (is_empty(input))
	{
		std::cout << "Input can't be empty. " << msg;
		std::cin >> input;
	}
	return (input);
}

int	get_number(std::string msg)
{
	int	number;

	std::cout << msg;
	std::cin >> number;
	while (!(number >= 0 && number <= 9)) 
	{
		std::cout << "Invalid number input. " << msg;
		std::cin >> number;
	}
	return (number);
}

int	get_index(std::string msg)
{
	int	number;

	std::cout << msg;
	std::cin >> number;
	while (!(number >= 0 && number <= 7)) 
	{
		std::cout << "Invalid number input. " << msg;
		std::cin >> number;
	}
	return (number);
}
