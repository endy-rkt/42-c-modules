/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 05:03:34 by trazanad          #+#    #+#             */
/*   Updated: 2024/11/07 06:01:59 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Weapon.hpp"

Weapon::Weapon( void )
{
	this->type = "";
}

Weapon::Weapon( std::string type)
{
	this->type = type;
}

std::string	Weapon::getType(void) const
{
	const	std::string &typeREF = this->type;
	return (typeREF);
}

void	Weapon::setType(std::string _type)
{
	this->type = _type;
}