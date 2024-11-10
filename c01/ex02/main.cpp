/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 04:41:33 by trazanad          #+#    #+#             */
/*   Updated: 2024/11/07 04:47:07 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "string memory address: " << &str << std::endl;
	std::cout << "stringPTR memory address: " << stringPTR << std::endl;
	std::cout << "stringPTR memory address: " << &stringREF << std::endl;
	std::cout << "string value address: " << str << std::endl;
	std::cout << "stringPTR value address: " << *stringPTR << std::endl;
	std::cout << "stringPTR value address: " << stringREF << std::endl;
	return (0);
}
