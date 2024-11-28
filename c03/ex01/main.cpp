/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 09:38:33 by trazanad          #+#    #+#             */
/*   Updated: 2024/11/28 10:11:06 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap ScavTrap("Clappy");

    ScavTrap.attack("Target1");

    ScavTrap.takeDamage(3);

    ScavTrap.beRepaired(5);

    for (int i = 0; i < 11; ++i) {
        ScavTrap.attack("Target2");
    }

    ScavTrap.takeDamage(15);
    ScavTrap.attack("Target3");
    ScavTrap.beRepaired(10);

    return 0;
}
