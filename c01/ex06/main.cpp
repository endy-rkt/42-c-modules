/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 08:26:17 by trazanad          #+#    #+#             */
/*   Updated: 2024/11/27 14:58:48 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl harl;

    if (argc == 1)
    {
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        return (0);
    }
    harl.complain(argv[1]);
    return (0);
}
