/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 14:39:10 by trazanad          #+#    #+#             */
/*   Updated: 2024/12/01 07:13:25 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP

# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	secret;
		std::string	phoneNumber;
	public:
		void		setContact(std::string firstName, std::string lastName, std::string nickName,
					std::string secret, std::string	phoneNumber);
		std::string	getFirstName();
		std::string	getLastName();
		std::string	getNickName();
		std::string	getSecret();
		std::string	getPhoneNumber();
		int			printContactInfo( void );
};

#endif

