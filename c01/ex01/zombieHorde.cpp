/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 04:27:09 by trazanad          #+#    #+#             */
/*   Updated: 2024/11/07 04:38:43 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	destroyZombie(Zombie *zombie)
{
	if (zombie == nullptr)
		return ;
	std::cout << "Destroy " << zombie->getName() << std::endl;
	delete zombie;
}

void	destroyHorde(Zombie *horde)
{
	if (horde == nullptr)
		return ;
	std::cout << "Destroy " << horde->getName() << std::endl;
	delete[] horde;
	horde = nullptr;
}

Zombie*	zombieHorde( int N, std::string name )
{
	Zombie	*myzombieHorde = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		myzombieHorde[i].setName(name);
	}
	return (myzombieHorde);
}