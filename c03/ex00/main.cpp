/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 09:38:33 by trazanad          #+#    #+#             */
/*   Updated: 2024/11/28 10:37:51 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap claptrap("Clappy");
    ClapTrap foo(claptrap);
    ClapTrap bar;

    bar = foo;
    claptrap.attack("Target1");
    bar.attack("Target2");
    foo.attack("Target3");

    claptrap.takeDamage(3);

    claptrap.beRepaired(5);

    for (int i = 0; i < 11; ++i) {
        claptrap.attack("Target2");
    }

    claptrap.takeDamage(15);
    claptrap.attack("Target3");
    claptrap.beRepaired(10);

    return 0;
}
