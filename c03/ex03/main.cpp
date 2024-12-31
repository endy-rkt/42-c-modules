/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 09:38:33 by trazanad          #+#    #+#             */
/*   Updated: 2024/12/31 10:38:16 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap diamond;
    diamond.whoAmI();

    diamond.attack("Target1");

    diamond.takeDamage(3);

    diamond.beRepaired(5);

    for (int i = 0; i < 11; ++i) {
        diamond.attack("Target2");
    }

    diamond.takeDamage(15);
    diamond.attack("Target3");
    diamond.beRepaired(10);

    return 0;
}
