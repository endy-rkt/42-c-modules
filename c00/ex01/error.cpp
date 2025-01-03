/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 14:50:06 by trazanad          #+#    #+#             */
/*   Updated: 2024/12/31 08:19:22 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

// int	is_empty(std::string str)
// {
// 	int	emptyNb;
// 	int	strLen;

// 	if (str.empty())
// 		return (1);
// 	emptyNb = 0;
// 	strLen = str.length();
// 	for (int i = 0; i < strLen; i++)
// 	{
// 		if ((str[i] >= '\a' && str[i] <= '\r') || str[i] == ' ')
// 			emptyNb++;
// 	}
// 	if (emptyNb == strLen)
// 		return (1);
// 	return (0);
// }

// std::string	getInput(std::string msg)
// {
// 	int			start = 0;
// 	std::string	input;

// 	std::cout << msg;
// 	std::getline(std::cin, input);
// 	if (std::cin.eof())
// 		return ("");
// 	while (is_empty(input))
// 	{
// 		std::cout << "Input can't be empty. " << msg;
// 		std::getline(std::cin, input);
// 		if (std::cin.eof())
// 			return ("");
// 	}
// 	while ((input[start] >= '\a' && input[start] <= '\r') || input[start] == ' ')
// 		start++;
// 	input = input.substr(start, (int)input.length());
// 	for (int i = input.length() - 1; i > 0; i--)
// 	{
// 		if ((input[i] >= '\a' && input[i] <= '\r') || input[i] == ' ')
// 			input.pop_back();
// 	}
// 	return (input);
// }

// int	is_number(std::string str)
// {
// 	for (int i = 0; i < (int)str.length(); i++)
// 	{
// 		if (!isdigit(str[i]))
// 			return (0);
// 	}
// 	return (1);
// }

// std::string	getIndex(std::string msg)
// {
// 	int			number;
// 	std::string input;

// 	std::cout << msg;
// 	std::getline(std::cin, input);
// 	if (std::cin.eof())
// 		return ("");
// 	number = atoi(input.c_str());
// 	while (!is_number(input) && (number >=0 && number <= 7)) 
// 	{
// 		std::cout << "Invalid number input. " << std::endl;
// 		std::cout << msg;
// 		std::getline(std::cin, input);
// 		if (std::cin.eof())
// 			return ("");
// 		number = atoi(input.c_str());
// 	}
// 	return (input);
// }


#include <iostream>
#include <string>
#include <cctype>

// 🛡️ Check if a string is empty or contains only whitespace characters
int is_empty(std::string str) {
    int emptyNb = 0;
    int strLen = str.length();

    if (str.empty())
        return 1;

    for (int i = 0; i < strLen; i++) {
        if ((str[i] >= '\a' && str[i] <= '\r') || str[i] == ' ')
            emptyNb++;
    }

    return (emptyNb == strLen) ? 1 : 0;
}

// 📥 Get validated user input (non-empty string)
std::string getInput(std::string msg) {
    int start = 0;
    std::string input;

    std::cout << CYAN << msg << RESET;
    std::getline(std::cin, input);

    if (std::cin.eof())
        return "";

    while (is_empty(input)) {
        std::cout << RED << "Input can't be empty. " << RESET << CYAN << msg << RESET;
        std::getline(std::cin, input);
        if (std::cin.eof())
            return "";
    }

    // Remove leading whitespace
    while ((input[start] >= '\a' && input[start] <= '\r') || input[start] == ' ')
        start++;
    input = input.substr(start, (int)input.length());

    // Remove trailing whitespace
    for (int i = input.length() - 1; i >= 0; i--) {
        if ((input[i] >= '\a' && input[i] <= '\r') || input[i] == ' ')
            input.pop_back();
        else
            break;
    }

    return input;
}

// 🔢 Check if a string represents a valid number
int is_number(std::string str) {
    for (int i = 0; i < (int)str.length(); i++) {
        if (!isdigit(str[i]))
            return 0;
    }
    return 1;
}

// 🔢 Get a validated index from the user
std::string getIndex(std::string msg) {
    int number;
    std::string input;

    std::cout << CYAN << msg << RESET;
    std::getline(std::cin, input);

    if (std::cin.eof())
        return "";

    number = atoi(input.c_str());
    while (!is_number(input) || number < 0 || number > 7) {
        std::cout << RED << "Invalid number input. Please enter a number between 0 and 7.\n" << RESET;
        std::cout << CYAN << msg << RESET;
        std::getline(std::cin, input);
        if (std::cin.eof())
            return "";
        number = atoi(input.c_str());
    }

    return input;
}
