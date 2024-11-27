/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 05:38:07 by trazanad          #+#    #+#             */
/*   Updated: 2024/11/27 15:02:17 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

int	main()
{
	int			do_exit;
	PhoneBook	my_phone_book;
	std::string	input;

	while (1)
	{
		std::cout << "Please enter your command (ADD, SEARCH, HELP, EXIT): ";
		std::getline(std::cin, input);
		while (is_empty(input))
		{
			std::cout << "Input can't be empty. Please enter your command (ADD, SEARCH, HELP, EXIT): ";
			std::getline(std::cin, input);
		}
		do_exit = execute_cmd(input, &my_phone_book);
		if (do_exit)
			return (0);
	}
	return (0);	
}
