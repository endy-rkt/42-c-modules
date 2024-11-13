/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:50:50 by trazanad          #+#    #+#             */
/*   Updated: 2024/11/13 12:52:02 by trazanad         ###   ########.fr       */
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

void	show_help_info()
{
	std::cout << "To use the phone book, you have 4 commands.\n";
	std::cout << "ADD:\ncreate a new contact in the repository.\n";
	std::cout << "SEARCH:\nget all informations about a contact.\n";
	std::cout << "HELP:\nread the manual info.\n";
	std::cout << "EXIT:\nterminate the program\n";
}

void	select_contact(PhoneBook *my_phone)
{
	int		index;
	Contact	contact;

	index = get_index("Please enter the contact index (between 0 to 7): ");
	while (!(index >= 0 && index <= 7))
	{
		index = get_index("Out of range index. Please enter the contact index (between 0 to 7): ");
	}
	contact = my_phone->search_contact(index);
	contact.print_contact_info(index);

}

void	add_new_contact(PhoneBook *my_phone)
{
	int			number;
	std::string	info[4];
	Contact		tmp;

	info[0] = get_input("Enter the contact's first name: ");
	info[1] = get_input("Enter the contact's last name: ");
	info[2] = get_input("Enter the contact's nickname: ");
	info[3] = get_input("Enter the contact's darkest secret: ");
	number = get_number("Enter the contact's number: ");
	tmp.set_contact(info[0], info[1], info[2], info[3], number);
	my_phone->add_contact(tmp);
	std::cout << "User added successfully!!!!\n";
}

int	execute_cmd(std::string input, PhoneBook *my_phone)
{
	if (input == "EXIT")
		return (1);
	else if (input == "ADD")
		add_new_contact(my_phone);
	else if (input == "SEARCH")
		select_contact(my_phone);
	else if (input == "HELP")
		show_help_info();
	else
		std::cout << "Command not recognized, please retry.\n";
	std::cout << "------------------------------------------------------------------\n\n";
	return (0);
}
