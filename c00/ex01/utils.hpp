/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 05:34:52 by trazanad          #+#    #+#             */
/*   Updated: 2024/11/09 15:32:33 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_HPP

# define HEADER_HPP

#include <iostream>

#include <string>

#include "Contact.hpp"

#include "PhoneBook.hpp"

int			ft_strcmp(std::string a, std::string b);
void		execute_cmd(std::string input, PhoneBook *my_phone);
void		select_contact(PhoneBook *my_phone);
void		print_info(std::string info);
int			is_empty(std::string str);
int			get_number(std::string msg);
int			get_index(std::string msg);
std::string	get_input(std::string msg);

#endif