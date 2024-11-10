/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 03:55:19 by trazanad          #+#    #+#             */
/*   Updated: 2024/11/07 04:40:26 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	int		hordeNb;
	Zombie	*horde;

	hordeNb = 10;
	horde = zombieHorde(hordeNb, "zombie");
	for (int i=0; i < hordeNb; i++)
	{
		horde[0].announce();
	}
	destroyHorde(horde);
	return (0);	
}
