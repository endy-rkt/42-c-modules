/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 03:57:35 by trazanad          #+#    #+#             */
/*   Updated: 2024/11/07 04:32:41 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

std::string	Zombie::getName( void )
{
	return (this->name);
}
void		Zombie::setName( std::string name )
{
	this->name = name;
}

Zombie::Zombie( std::string name )
{
	this->name = name;	
}

Zombie::Zombie( void )
{
	this->name.clear();
}

void	Zombie::announce( void )
{
	std::string	name;

	name = this->name;
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}
