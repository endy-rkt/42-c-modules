/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 04:52:27 by trazanad          #+#    #+#             */
/*   Updated: 2025/01/02 05:05:38 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "Destructor for wrong animal called." << std::endl;	
}

WrongAnimal::WrongAnimal( void ):type("WrongAnimal")
{
	std::cout << "Default constructor for wrong animal called." << std::endl;	
}

WrongAnimal::WrongAnimal( const std::string & type):type(type)
{
	std::cout << "String constructor for wrong animal called." << std::endl;	
}

WrongAnimal::WrongAnimal( const WrongAnimal & copy ):type(copy.getType())
{
	std::cout << "Copy constructor for wrong animal called." << std::endl;	
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal & copy )
{
	if (this != &copy)
		this->type = copy.getType();
    std::cout << "Copy assignment for wrong animal called!" << std::endl;
	return (*this);
}

std::string	WrongAnimal::getType( void ) const
{
	return (this->type);
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "...sound make by wrong animal." << std::endl;	
}
