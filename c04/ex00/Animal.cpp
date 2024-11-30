/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 10:57:16 by trazanad          #+#    #+#             */
/*   Updated: 2024/11/30 11:17:40 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::~Animal( void )
{
    std::cout << "Destructor for Animal called!" << std::endl;
}

Animal::Animal( void ): type("animal")
{
    std::cout << "Default constructor for Animal called!" << std::endl;
}

Animal::Animal( const Animal & copy ): type(copy.getType())
{
    std::cout << "Copy constructor for Animal called!" << std::endl; 
}

Animal  & Animal::operator=( const Animal & copy )
{
    if (this != &copy)
        this->type = copy.getType();
    std::cout << "Copy assignment for Animal called!" << std::endl;    
}

std::string Animal::getType( void ) const
{
    return (this->type);
}
