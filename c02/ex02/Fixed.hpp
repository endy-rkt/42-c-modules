/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 09:39:59 by trazanad          #+#    #+#             */
/*   Updated: 2024/11/21 11:08:09 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP

# define FIXED_HPP

#include <iostream>

#include <string>

#include <cmath>

class Fixed
{
    private:
        int                 _nbValue;
        static int const    _bitValue;
    public:
        Fixed( void );
        ~Fixed( void );
        Fixed( int const nbValue );
        Fixed( float const nbValue );
        Fixed( const Fixed & copy );
        Fixed   & operator=(Fixed const & copy);
        int     getRawBits( void ) const;
        void    setRawBits( float const raw );
        void    setRawBits( int const raw );
        float   toFloat( void ) const;
        int     toInt( void ) const;
        float   min( const Fixed & a, const Fixed & b );
        int     min( const Fixed & a, const Fixed & b );
        float   max( const Fixed & a, const Fixed & b );
        int     max( const Fixed & a, const Fixed & b );
};

std::ostream & operator<<(std::ostream & o, Fixed const & nb);

#endif