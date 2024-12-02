/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:50:50 by trazanad          #+#    #+#             */
/*   Updated: 2024/12/01 16:25:29 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

void	print_info(std::string info)
{
	int	i;
	int	infoLength;

	i = 0;
	infoLength = info.length();
	for (int i = 0; i < (10 - infoLength); i++)
	{
		std::cout << " ";
	}
	for (i = 0; i < (int)info.length(); i++)
	{
		if (i == 9)
		{
			std::cout << ".";
			break ;
		}
		std::cout << info[i];
	}
}

std::string	formattedInfo(std::string info)
{
	int			len;
	std::string	result;

	result = "";
	len = info.length();
	for (int i = len; i < 10; i++)
		result = " " + result;
	result = result + info.substr(0, 9);
	if (len >= 10)
		result =  result + ".";
	return (result);
}

void	contactRow(Contact contact, int index)
{
	std::string info[4];

	info[0] = formattedInfo(std::to_string(index)); 
	info[1] = formattedInfo(contact.getFirstName()); 
	info[2] = formattedInfo(contact.getLastName()); 
	info[3] = formattedInfo(contact.getNickName()); 
	std::cout << info[0] << "|" << info[1] << "|" <<  info[2] << "|" <<  info[3] << std::endl;
}

bool	printContactTable(PhoneBook *myPhone, int index)
{
	Contact	contact;

	if (index == 0)
	{
		std::cout << "No contact with this index yet." << std::endl;
		return (false);
	}
	std::cout << std::endl;
	std::cout << "*******************************************" << std::endl;
	std::cout << "     Index" << "|" << "First name" << "|" <<  " Last name" << "|" <<  "  Nickname" << std::endl;
	std::cout << "*******************************************" << std::endl;
	// std::cout << "----------" << "|" << "----------" << "|" <<  "----------" << "|" <<  "----------" << std::endl;
	for (index = 0; index < 8; index++)
	{
		contact = myPhone->searchContact(index);
		if (contact.getFirstName().empty())
			break ;
		contactRow(contact, index);
	}
	std::cout << "*******************************************" << std::endl;
	std::cout << std::endl;
	return (true);
}

bool	printRawTable(PhoneBook *my_phone)
{
	int		index;
	bool	noContact;
	Contact contact;

	for (index = 0; index < 8; index++)
	{
		contact = my_phone->searchContact(index);
		if (contact.getFirstName().empty())
			break ;
	}
	noContact = printContactTable(my_phone, index);
	return (noContact);
}

int	selectContact(PhoneBook *my_phone)
{
	int			index;
	std::string	strIndex;
	Contact		contact;

	if (!printRawTable(my_phone))
		return (0);
	strIndex = getIndex("Enter the contact index (between 0-7): ");
	if (is_empty(strIndex))
		return (1);
	index = atoi(strIndex.c_str());
	contact = my_phone->searchContact(index);
	contact.printContactInfo();
	std::cout << std::endl;
	return (0);
}

int	addNewContact(PhoneBook *my_phone)
{
	std::string	info[5];
	Contact		tmp;

	info[0] = getInput("Enter the contact's first name: ");
	if (is_empty(info[0]))
		return (1);
	info[1] = getInput("Enter the contact's last name: ");
	if (is_empty(info[1]))
		return (1);
	info[2] = getInput("Enter the contact's nickname: ");
	if (is_empty(info[2]))
		return (1);
	info[3] = getInput("Enter the contact's darkest secret: ");
	if (is_empty(info[3]))
		return (1);
	info[4] = getInput("Enter the contact's number: ");
	if (is_empty(info[4]))
		return (1);
	tmp.setContact(info[0], info[1], info[2], info[3], info[4]);
	my_phone->addContact(tmp);
	std::cout << std::endl;
	std::cout << "Contact added successfully!!!!" << std::endl;
	std::cout << std::endl;
	return (0);
}

int	executeCmd(std::string input, PhoneBook *my_phone)
{
	int status;

	status = 0;
	if (input == "EXIT")
		return (1);
	else if (input == "ADD")
		status = addNewContact(my_phone);
	else if (input == "SEARCH")
		status = selectContact(my_phone);
	else
		std::cout << "Command not recognized, please retry." << std::endl;
	if (status == 0)
		std::cout << "-------------------------------------------------------------\n\n";
	return (status);
}
