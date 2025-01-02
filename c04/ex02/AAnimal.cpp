/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 10:57:16 by trazanad          #+#    #+#             */
/*   Updated: 2025/01/02 08:58:58 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::~AAnimal( void )
{
    std::cout << "Destructor for animal called!" << std::endl;
}

AAnimal::AAnimal( void ): type("animal")
{
    std::cout << "Default constructor for animal called!" << std::endl;
}

AAnimal::AAnimal(const std::string & type):type(type)
{
    std::cout << "String constructor for animal called!" << std::endl;
}

AAnimal::AAnimal( const AAnimal & copy ): type(copy.getType())
{
    std::cout << "Copy constructor for animal called!" << std::endl; 
}

AAnimal  & AAnimal::operator=( const AAnimal & copy )
{
    if (this != &copy)
        this->type = copy.getType();
    std::cout << "Copy assignment for animal called!" << std::endl;
    return (*this);   
}

std::string AAnimal::getType( void ) const
{
    return (this->type);
}
