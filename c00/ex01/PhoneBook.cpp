/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 05:25:18 by trazanad          #+#    #+#             */
/*   Updated: 2024/12/01 07:13:45 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::addContact(Contact newContact)
{
	static int	index = 0;

	index = index % 8;
	this->_contacts[index] = newContact;
	index++;
}

Contact	PhoneBook::searchContact(int index)
{
	int	formattedIndex;

	formattedIndex = index % 8;
	return (this->_contacts[formattedIndex]);
}
