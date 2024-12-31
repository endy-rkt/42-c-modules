/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:50:50 by trazanad          #+#    #+#             */
/*   Updated: 2024/12/31 08:28:10 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

// void	print_info(std::string info)
// {
// 	int	i;
// 	int	infoLength;

// 	i = 0;
// 	infoLength = info.length();
// 	for (int i = 0; i < (10 - infoLength); i++)
// 	{
// 		std::cout << " ";
// 	}
// 	for (i = 0; i < (int)info.length(); i++)
// 	{
// 		if (i == 9)
// 		{
// 			std::cout << ".";
// 			break ;
// 		}
// 		std::cout << info[i];
// 	}
// }

// std::string	formattedInfo(std::string info)
// {
// 	int			len;
// 	std::string	result;

// 	result = "";
// 	len = info.length();
// 	for (int i = len; i < 10; i++)
// 		result = " " + result;
// 	result = result + info.substr(0, 9);
// 	if (len >= 10)
// 		result =  result + ".";
// 	return (result);
// }

// void	contactRow(Contact contact, int index)
// {
// 	std::string info[4];

// 	info[0] = formattedInfo(std::to_string(index)); 
// 	info[1] = formattedInfo(contact.getFirstName()); 
// 	info[2] = formattedInfo(contact.getLastName()); 
// 	info[3] = formattedInfo(contact.getNickName()); 
// 	std::cout << info[0] << "|" << info[1] << "|" <<  info[2] << "|" <<  info[3] << std::endl;
// }

// bool	printContactTable(PhoneBook *myPhone, int index)
// {
// 	Contact	contact;

// 	if (index == 0)
// 	{
// 		std::cout << "No contact with this index yet." << std::endl;
// 		return (false);
// 	}
// 	std::cout << std::endl;
// 	std::cout << "*******************************************" << std::endl;
// 	std::cout << "     Index" << "|" << "First name" << "|" <<  " Last name" << "|" <<  "  Nickname" << std::endl;
// 	std::cout << "*******************************************" << std::endl;
// 	// std::cout << "----------" << "|" << "----------" << "|" <<  "----------" << "|" <<  "----------" << std::endl;
// 	for (index = 0; index < 8; index++)
// 	{
// 		contact = myPhone->searchContact(index);
// 		if (contact.getFirstName().empty())
// 			break ;
// 		contactRow(contact, index);
// 	}
// 	std::cout << "*******************************************" << std::endl;
// 	std::cout << std::endl;
// 	return (true);
// }

// bool	printRawTable(PhoneBook *my_phone)
// {
// 	int		index;
// 	bool	noContact;
// 	Contact contact;

// 	for (index = 0; index < 8; index++)
// 	{
// 		contact = my_phone->searchContact(index);
// 		if (contact.getFirstName().empty())
// 			break ;
// 	}
// 	noContact = printContactTable(my_phone, index);
// 	return (noContact);
// }

// int	selectContact(PhoneBook *my_phone)
// {
// 	int			index;
// 	std::string	strIndex;
// 	Contact		contact;

// 	if (!printRawTable(my_phone))
// 		return (0);
// 	strIndex = getIndex("Enter the contact index (between 0-7): ");
// 	if (is_empty(strIndex))
// 		return (1);
// 	index = atoi(strIndex.c_str());
// 	contact = my_phone->searchContact(index);
// 	contact.printContactInfo();
// 	std::cout << std::endl;
// 	return (0);
// }

// int	addNewContact(PhoneBook *my_phone)
// {
// 	std::string	info[5];
// 	Contact		tmp;

// 	info[0] = getInput("Enter the contact's first name: ");
// 	if (is_empty(info[0]))
// 		return (1);
// 	info[1] = getInput("Enter the contact's last name: ");
// 	if (is_empty(info[1]))
// 		return (1);
// 	info[2] = getInput("Enter the contact's nickname: ");
// 	if (is_empty(info[2]))
// 		return (1);
// 	info[3] = getInput("Enter the contact's darkest secret: ");
// 	if (is_empty(info[3]))
// 		return (1);
// 	info[4] = getInput("Enter the contact's number: ");
// 	if (is_empty(info[4]))
// 		return (1);
// 	tmp.setContact(info[0], info[1], info[2], info[3], info[4]);
// 	my_phone->addContact(tmp);
// 	std::cout << std::endl;
// 	std::cout << "Contact added successfully!!!!" << std::endl;
// 	std::cout << std::endl;
// 	return (0);
// }

// int	executeCmd(std::string input, PhoneBook *my_phone)
// {
// 	int status;

// 	status = 0;
// 	if (input == "EXIT")
// 		return (1);
// 	else if (input == "ADD")
// 		status = addNewContact(my_phone);
// 	else if (input == "SEARCH")
// 		status = selectContact(my_phone);
// 	else
// 		std::cout << "Command not recognized, please retry." << std::endl;
// 	if (status == 0)
// 		std::cout << "-------------------------------------------------------------\n\n";
// 	return (status);
// }
#include <iomanip>
#include <iostream>
#include <string>

// 📝 Utility function to format table headers
void printHeader() {
    std::cout << BLUE << BOLD
              << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname"
              << RESET << std::endl;
    std::cout << CYAN4 << std::string(44, '-') << RESET << std::endl;
}

// 📝 Format a string to fit into a 10-character table cell
std::string formattedInfo(const std::string& info) {
    if (info.length() > 9) {
        return info.substr(0, 9) + ".";
    }
    return std::string(10 - info.length(), ' ') + info;
}

// 📝 Print a row in the contact table
void contactRow(Contact contact, int index) {
    std::cout << std::setw(10) << index << "|"
              << formattedInfo(contact.getFirstName()) << "|"
              << formattedInfo(contact.getLastName()) << "|"
              << formattedInfo(contact.getNickName()) << std::endl;
}

// 📝 Print the contact table
bool printContactTable(PhoneBook* myPhone, int index) {
    if (index == 0) {
        std::cout << RED << "No contacts available to display." << RESET << std::endl;
        return false;
    }

    std::cout << "\n" << CYAN4 << std::string(44, '*') << RESET << std::endl;
    printHeader();

    for (int i = 0; i < 8; i++) {
        Contact contact = myPhone->searchContact(i);
        if (contact.getFirstName().empty())
            break;
        contactRow(contact, i);
    }

    std::cout << CYAN4 << std::string(44, '*') << RESET << "\n" << std::endl;
    return true;
}

// 📝 Print raw table (wrapper for printContactTable)
bool printRawTable(PhoneBook* myPhone) {
    int index = 0;

    for (; index < 8; index++) {
        Contact contact = myPhone->searchContact(index);
        if (contact.getFirstName().empty())
            break;
    }
    return printContactTable(myPhone, index);
}

// 📝 Prompt user to select a contact
int selectContact(PhoneBook* myPhone) {
    if (!printRawTable(myPhone))
        return 0;

    std::string strIndex = getIndex(CYAN "Enter the contact index (between 0-7): " RESET);
    if (is_empty(strIndex))
        return 1;

    int index = atoi(strIndex.c_str());
    Contact contact = myPhone->searchContact(index);
    contact.printContactInfo();

    std::cout << std::endl;
    return 0;
}

// 📝 Add a new contact
int addNewContact(PhoneBook* myPhone) {
    std::string info[5];
    Contact tmp;

    info[0] = getInput(CYAN "Enter the contact's first name: " RESET);
    if (is_empty(info[0])) return 1;

    info[1] = getInput(CYAN "Enter the contact's last name: " RESET);
    if (is_empty(info[1])) return 1;

    info[2] = getInput(CYAN "Enter the contact's nickname: " RESET);
    if (is_empty(info[2])) return 1;

    info[3] = getInput(CYAN "Enter the contact's darkest secret: " RESET);
    if (is_empty(info[3])) return 1;

    info[4] = getInput(CYAN "Enter the contact's number: " RESET);
    if (is_empty(info[4])) return 1;

    tmp.setContact(info[0], info[1], info[2], info[3], info[4]);
    myPhone->addContact(tmp);

    std::cout << GREEN << "\nContact added successfully.\n" << RESET << std::endl;
    return 0;
}

// 📝 Command execution
int executeCmd(std::string input, PhoneBook* myPhone) {
    int status = 0;

    if (input == "EXIT") {
        std::cout << CYAN4 << "Exiting program. Goodbye!" << RESET << std::endl;
        return 1;
    } else if (input == "ADD") {
        status = addNewContact(myPhone);
    } else if (input == "SEARCH") {
        status = selectContact(myPhone);
    } else {
        std::cout << RED << "Invalid command. Please try again." << RESET << std::endl;
    }

    if (status == 0)
        std::cout << CYAN4 << "-------------------------------------------------------------\n\n" << RESET;
    
    return status;
}
