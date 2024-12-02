/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 05:34:52 by trazanad          #+#    #+#             */
/*   Updated: 2024/12/01 16:18:06 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_HPP

# define HEADER_HPP

#include <iostream>

#include <string>

#include "Contact.hpp"

#include "PhoneBook.hpp"

int         executeCmd(std::string input, PhoneBook *my_phone);
int			selectContact(PhoneBook *my_phone);
void		printInfo(std::string info);
int			is_empty(std::string str);
int         is_number(std::string str);
std::string	getIndex(std::string msg);
std::string	getInput(std::string msg);

#endif