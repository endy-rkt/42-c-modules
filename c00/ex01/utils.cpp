/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:50:50 by trazanad          #+#    #+#             */
/*   Updated: 2024/11/09 15:39:36 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

int	ft_strcmp(std::string a, std::string b)
{
	int	i;

	i = 0;
	while (a[i] && b[i])
	{
		if (a[i] != b[i])
			return (a[i] - b[i]);
		i++;
	}
	return (0);
}

void	print_info(std::string info)
{
	int	i;

	i = 0;
	for (i = 0; i < (int)info.length(); i++)
	{
		if (i == 9)
		{
			std::cout << ".";
			break ;
		}
		std::cout << info[i];
	}
	while (i < 9)
	{
		std::cout << " ";
		i++;
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
	index %=  8;
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

void	execute_cmd(std::string input, PhoneBook *my_phone)
{
	if (ft_strcmp(input, "EXIT") == 0)
		exit(EXIT_SUCCESS);
	else if (ft_strcmp(input, "ADD") == 0)
		add_new_contact(my_phone);
	else if (ft_strcmp(input, "SEARCH") == 0)
		select_contact(my_phone);
	else if (ft_strcmp(input, "HELP") == 0)
		show_help_info();
	else
		std::cout << "Command not recognized, please retry.\n";
	std::cout << "------------------------------------------------------------------\n\n";
}
