/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 09:34:01 by trazanad          #+#    #+#             */
/*   Updated: 2025/01/03 02:08:09 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP

#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"

#include "ScavTrap.hpp"

#include "FragTrap.hpp"

class DiamondTrap:  public FragTrap, public ScavTrap
{
	protected:
		std::string _name;
	public:
		//constructor
		~DiamondTrap( void );
		DiamondTrap( void );
		DiamondTrap(const std::string name );
		DiamondTrap(const DiamondTrap & copy );
		DiamondTrap & operator=(DiamondTrap const & copy);
		//method
		void    attack(const std::string& target);
		void	whoAmI( void );
};

#endif