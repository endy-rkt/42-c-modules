/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 10:01:19 by trazanad          #+#    #+#             */
/*   Updated: 2024/11/28 10:12:09 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP

# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
    public:
        //method
        ~FragTrap( void );
        FragTrap( void );
        FragTrap( const std::string name );
        FragTrap( const FragTrap & copy );
        FragTrap & operator=(FragTrap const & copy);
        //method
        void    attack(const std::string& target);
        void    guardGate( void );
};

#endif