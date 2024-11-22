/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 09:39:59 by trazanad          #+#    #+#             */
/*   Updated: 2024/11/22 11:05:27 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP

# define FIXED_HPP

#include <iostream>

#include <string>

#include <limits>

#include <cmath>

class Fixed
{
    private:
        int                 _nbValue;
        static int const    _bitValue;
    public:
        //constructor
        Fixed( void );
        ~Fixed( void );
        Fixed( int const nbValue );
        Fixed( float const nbValue );
        Fixed( const Fixed & copy );
        Fixed   & operator=(Fixed const & copy);

        //method
        int     getRawBits( void ) const;
        void    setRawBits( float const raw );
        void    setRawBits( int const raw );
        float   toFloat( void ) const;
        int     toInt( void ) const;
        static float   min( const Fixed & a, const Fixed & b );
        static float   min(  Fixed & a,  Fixed & b );
        static float   max( const Fixed & a, const Fixed & b );
        static float   max(  Fixed & a,  Fixed & b );

        //operator overload
                /*comparaison operator*/
        bool    operator>(const Fixed & a) const;
        bool    operator<(const Fixed & a) const;
        bool    operator>=(const Fixed & a) const;
        bool    operator<=(const Fixed & a) const;
        bool    operator==(const Fixed & a) const;
        bool    operator!=(const Fixed & a) const;
                /*incrementation operator*/
        Fixed & operator++( void ); //pre
        Fixed   operator++( int ); //post
        Fixed & operator--( void ); //pre
        Fixed   operator--( int ); //post

};

std::ostream & operator<<(std::ostream & o, Fixed const & nb);
                /*arithmetic operator*/
Fixed   operator+(const Fixed & a, const Fixed & b);
Fixed   operator-(const Fixed & a, const Fixed & b);
Fixed   operator*(const Fixed & a, const Fixed & b);
Fixed   operator/(const Fixed & a, const Fixed & b);

#endif