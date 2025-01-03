/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 03:55:19 by trazanad          #+#    #+#             */
/*   Updated: 2025/01/03 01:20:56 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	int		hordeNb;
	Zombie	*horde;

	hordeNb = 10;
	horde = zombieHorde(hordeNb, "zombie");
	if (!horde)
		return (0);
	for (int i=0; i < hordeNb; i++)
	{
		horde[0].announce();
	}
	destroyHorde(horde);
	return (0);	
}
