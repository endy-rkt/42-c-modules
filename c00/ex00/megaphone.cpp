/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 04:54:41 by trazanad          #+#    #+#             */
/*   Updated: 2024/11/06 05:08:37 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	int			len;
	std::string	arg;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (1);
	}
	for (int i = 1; i < argc; i++)
	{
		arg = argv[i];
		len = arg.length();
		for (int j = 0; j < len; j++)
			std::cout << (char) std::toupper(arg[j]);;
	}
	std::cout << std::endl;
	return (0);
}
