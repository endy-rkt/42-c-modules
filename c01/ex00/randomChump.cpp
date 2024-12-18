/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 04:06:49 by trazanad          #+#    #+#             */
/*   Updated: 2024/11/14 08:58:52 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	destroyZombie(Zombie *zombie)
{
	if (zombie == NULL)
		return ;
	std::cout << "Destroy " << zombie->getName() << std::endl;
	delete zombie;
}

void	randomChump( std::string name )
{
	Zombie	*myZombie;

	myZombie = newZombie(name);
	myZombie->announce();
	destroyZombie(myZombie);
	myZombie = NULL;
}
