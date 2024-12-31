/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 09:22:52 by trazanad          #+#    #+#             */
/*   Updated: 2024/12/31 10:10:10 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP

# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
    public:
        //method
        ~ScavTrap( void );
        ScavTrap( void );
        ScavTrap( const std::string name );
        ScavTrap( const ScavTrap & copy );
        ScavTrap & operator=(ScavTrap const & copy);
        //method
        void    attack(const std::string& target);
        void    guardGate( void );
};

#endif