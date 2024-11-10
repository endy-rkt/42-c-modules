/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 03:55:35 by trazanad          #+#    #+#             */
/*   Updated: 2024/11/07 04:31:32 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_HPP

#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string	name;
	public:
		void 		announce( void );
		std::string	getName( void );
		void		setName( std::string name );
		Zombie( std::string name );
		Zombie( void );
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );
void	destroyZombie(Zombie *zombie);

#endif