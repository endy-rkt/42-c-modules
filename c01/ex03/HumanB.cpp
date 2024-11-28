/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 05:32:01 by trazanad          #+#    #+#             */
/*   Updated: 2024/11/28 09:18:00 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ): name(name), weapon(nullptr)
{
}

void	HumanB::attack( void )
{
	if (this->weapon == nullptr)
	{
		std::cout << this->name << " has no weapon yet!\n";
		return ;
	}
	
	Weapon		weapon = *(this->weapon);
	std::string weapon_type = weapon.getType();

	if (!weapon_type.empty())
		std::cout << this->name << " attacks with their " << weapon_type << std::endl;
	else
		std::cout << this->name << " has no weapon yet!\n";
}

void	HumanB::setWeapon( Weapon &weapon )
{
	this->weapon = &weapon;
}
