/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 05:30:54 by trazanad          #+#    #+#             */
/*   Updated: 2024/11/09 15:40:20 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "utils.hpp"

void	Contact::set_contact(std::string first_name, std::string last_name, std::string nickname,
		std::string secret, int phone_number)
{
	this->first_name = first_name;
	this->last_name = last_name;
	this->nickname = nickname;
	this->secret = secret;
	this->phone_number = phone_number;
}

std::string	Contact::get_first_name()
{
	return (this->first_name);
}

std::string	Contact::get_last_name()
{
	return (this->last_name);
}

std::string	Contact::get_nick_name()
{
	return (this->nickname);
}

std::string	Contact::get_secret()
{
	return (this->secret);
}

int	Contact::get_phone_number()
{
	return (this->phone_number);
}

void	Contact::print_contact_info(int	index)
{
	if (this->first_name.empty() && this->last_name.empty() 
		&& this->nickname.empty())
	{
		std::cout << "No contact with this index yet.\n";
		return ;
	}
	std::cout << index << "        " << " | ";
	print_info(this->first_name);
	std::cout << " | ";
	print_info(this->last_name);
	std::cout << " | ";
	print_info(this->nickname);
	std::cout << std::endl;
}
