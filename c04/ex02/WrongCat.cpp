/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 05:07:57 by trazanad          #+#    #+#             */
/*   Updated: 2025/01/02 05:08:38 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::~WrongCat( void )
{
    std::cout << "Destructor for WrongCat called!" << std::endl;
}

WrongCat::WrongCat( void ): WrongAnimal("WrongCat")
{
    std::cout << "Default constructor for WrongCat called!" << std::endl;
}

WrongCat::WrongCat( const WrongCat & copy ): WrongAnimal( copy )
{
    std::cout << "Copy constructor for WrongCat called!" << std::endl; 
}

WrongCat  & WrongCat::operator=( const WrongCat & copy )
{
    if (this != &copy)
        this->type = copy.getType();
    std::cout << "Copy assignment for WrongCat called!" << std::endl;
    return (*this); 
}

void    WrongCat::makeSound( void ) const
{
    std::cout << "wrong meow meow..." << std::endl;
}