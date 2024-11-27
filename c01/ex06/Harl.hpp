/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 08:26:26 by trazanad          #+#    #+#             */
/*   Updated: 2024/11/27 14:40:27 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP

# define HARL_HPP

#include <iostream>
#include <string>
#include <map>

class Harl
{
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
    public:
        void complain( std::string level );
};

struct  s_harl
{
    std::string type;
    void (Harl::*complainFunction)();
};

#endif