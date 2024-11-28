/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 05:32:01 by trazanad          #+#    #+#             */
/*   Updated: 2024/11/28 09:19:09 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon )
{
	this->name = name;
	this->weapon = &weapon;
}

void	HumanA::attack( void )
{
	Weapon		weapon = *(this->weapon);
	std::string weapon_type = weapon.getType();

	std::cout << this->name << " attacks with their " << weapon_type << std::endl;
}
