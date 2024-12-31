/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 05:34:52 by trazanad          #+#    #+#             */
/*   Updated: 2024/12/31 08:42:55 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_HPP

# define HEADER_HPP

#include <iostream>

#include <string>

#include "Contact.hpp"

#include "PhoneBook.hpp"

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
// #define YELLOW  "\033[36m"
#define BLUE    "\033[34m"
#define CYAN    "\033[36m"
#define CYAN4    "\033[0;32m"
#define BOLD    "\033[1m"


int         executeCmd(std::string input, PhoneBook *my_phone);
int			selectContact(PhoneBook *my_phone);
void		printInfo(std::string info);
int			is_empty(std::string str);
int         is_number(std::string str);
std::string	getIndex(std::string msg);
std::string	getInput(std::string msg);

#endif