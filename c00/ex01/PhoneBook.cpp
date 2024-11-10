/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 05:25:18 by trazanad          #+#    #+#             */
/*   Updated: 2024/11/09 14:43:42 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::add_contact(Contact new_contact)
{
	static int	index = 0;

	index = index % 8;
	this->contacts[index] = new_contact;
	index++;
}

Contact	PhoneBook::search_contact(int index)
{
	int	formatted_index;

	formatted_index = index % 8;
	return (this->contacts[formatted_index]);
}
