/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 04:27:09 by trazanad          #+#    #+#             */
/*   Updated: 2025/01/03 01:21:39 by trazanad         ###   ########.fr       */
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

void	destroyHorde(Zombie *horde)
{
	if (horde == NULL)
		return ;
	std::cout << "Destroy " << horde->getName() << std::endl;
	delete[] horde;
	horde = NULL;
}

Zombie*	zombieHorde( int N, std::string name )
{
	if (N <= 0)
	{
		std::cout << "Invalid number of zombie" << std::endl;
		return (0);
	}
	Zombie	*myzombieHorde = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		myzombieHorde[i].setName(name);
	}
	return (myzombieHorde);
}
