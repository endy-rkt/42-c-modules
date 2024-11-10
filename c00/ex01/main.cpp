/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 05:38:07 by trazanad          #+#    #+#             */
/*   Updated: 2024/11/09 14:56:07 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

int	main()
{
	PhoneBook	my_phone_book;
	std::string	input;

	while (1)
	{
		std::cout << "Please enter your command (ADD, SEARCH, HELP, EXIT): ";
		std::cin >> input;
		while (is_empty(input))
		{
			std::cout << "Input can't be empty. Please enter your command (ADD, SEARCH, HELP, EXIT): ";
			std::cin >> input;
		}
		execute_cmd(input, &my_phone_book);
	}
	return (0);	
}
