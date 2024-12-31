/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 05:38:07 by trazanad          #+#    #+#             */
/*   Updated: 2024/12/31 08:24:53 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

int main() {
    int status = 0;    
    PhoneBook phoneBook;
    std::string input;

    while (true) {
        std::cout << CYAN << BOLD << "Enter your command (ADD, SEARCH, HELP, EXIT): " << RESET;
        std::getline(std::cin, input);
        if (std::cin.eof())
            return 1;

        while (is_empty(input)) {
            std::cout << RED << "Command cannot be empty. Please enter a valid command.\n" << RESET;
            std::cout << CYAN << BOLD << "Enter your command (ADD, SEARCH, HELP, EXIT): " << RESET;
            std::getline(std::cin, input);
            if (std::cin.eof())
                return 1;
        }

        std::cout << std::endl;
        status = executeCmd(input, &phoneBook);
        
        if (status) {
            std::cout << RED << "Exiting program. Goodbye!\n" << RESET;
            return 1;
        }
    }

    return 0;    
}

// int	main()
// {
// 	int			status;
// 	PhoneBook	phoneBook;
// 	std::string	input;

// 	status = 0;	
// 	while (1)
// 	{
// 		std::cout << "Enter your command (ADD, SEARCH, HELP, EXIT): ";
// 		std::getline(std::cin, input);
// 		if (std::cin.eof())
// 			return (1);
// 		while (is_empty(input))
// 		{
// 			std::cout << "Make sure that the command is not empty." << std::endl; 
// 			std::cout << "Enter your command (ADD, SEARCH, HELP, EXIT): ";
// 			std::getline(std::cin, input);
// 			if (std::cin.eof())
// 				return (1);
// 		}
// 		std::cout << std::endl;
// 		status = executeCmd(input, &phoneBook);
// 		if (status)
// 			return (1);
// 	}
// 	return (0);	
// }
