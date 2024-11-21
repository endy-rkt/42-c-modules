/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 08:26:26 by trazanad          #+#    #+#             */
/*   Updated: 2024/11/19 11:16:13 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP

# define FIXED_HPP

#include <iostream>
#include <string>
#include <map>

class Fixed
{
    private:
        int                 _nbValue;
        static int const    _bitValue;
    public:
        Fixed( void );
        ~Fixed( void );
        Fixed( const Fixed & copy );
        Fixed   & operator=(Fixed const & copy);
        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
};

#endif