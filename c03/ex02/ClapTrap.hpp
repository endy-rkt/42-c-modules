/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 09:01:01 by trazanad          #+#    #+#             */
/*   Updated: 2024/11/28 09:24:39 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP

# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
    protected:
        std::string     _name;
        unsigned int    _hitPoint;
        unsigned int    _energyPoint;
        unsigned int    _attackDamage;
    public:
        //constructor
        ClapTrap( void );
        ~ClapTrap( void );
        ClapTrap( const std::string name );
        ClapTrap( const ClapTrap & copy );
        ClapTrap & operator=(ClapTrap const & copy);
        //getter
        std::string     getName( void ) const;
        unsigned int    getHitPoint( void ) const;
        unsigned int    getEnergyPoint( void ) const;
        unsigned int    getAttackDamage( void ) const;
        //method
        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
};

#endif