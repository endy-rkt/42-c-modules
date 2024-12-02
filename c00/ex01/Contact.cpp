/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 05:30:54 by trazanad          #+#    #+#             */
/*   Updated: 2024/12/01 07:15:25 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "utils.hpp"

void	Contact::setContact(std::string firstName, std::string lastName, std::string nickName,
		std::string secret, std::string	phoneNumber)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->nickName = nickName;
	this->secret = secret;
	this->phoneNumber = phoneNumber;
}

std::string	Contact::getFirstName()
{
	return (this->firstName);
}

std::string	Contact::getLastName()
{
	return (this->lastName);
}

std::string	Contact::getNickName()
{
	return (this->nickName);
}

std::string	Contact::getSecret()
{
	return (this->secret);
}

std::string	Contact::getPhoneNumber()
{
	return (this->phoneNumber);
}

int	Contact::printContactInfo( void )
{
	if (this->firstName.empty())
	{
		std::cout << "No contact with this index yet." << std::endl;
		return (0);
	}
	std::cout << "First name:   " << this->firstName << std::endl;
	std::cout << "Last name:    " << this->lastName << std::endl;
	std::cout << "Nickname:     " << this->nickName << std::endl;
	std::cout << "Dark secret:  " << this->secret << std::endl;
	std::cout << "Phone number: " << this->phoneNumber << std::endl;
	return (0);
}
