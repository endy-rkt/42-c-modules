/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 09:38:33 by trazanad          #+#    #+#             */
/*   Updated: 2024/11/28 10:13:17 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap fragTrap("Clappy");

    fragTrap.attack("Target1");

    fragTrap.takeDamage(3);

    fragTrap.beRepaired(5);

    for (int i = 0; i < 11; ++i) {
        fragTrap.attack("Target2");
    }

    fragTrap.takeDamage(15);
    fragTrap.attack("Target3");
    fragTrap.beRepaired(10);

    return 0;
}
