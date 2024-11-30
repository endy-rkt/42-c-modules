/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 15:32:13 by trazanad          #+#    #+#             */
/*   Updated: 2024/11/30 15:32:45 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::~Dog( void )
{
    std::cout << "Destructor for Dog called!" << std::endl;
}

Dog::Dog( void ): Animal()
{
    this->type = "Dog";
    std::cout << "Default constructor for Dog called!" << std::endl;
}

Dog::Dog( const Dog & copy ): Animal( copy )
{
    std::cout << "Copy constructor for Dog called!" << std::endl; 
}

Dog  & Dog::operator=( const Dog & copy )
{
    if (this != &copy)
        this->type = copy.getType();
    std::cout << "Copy assignment for Dog called!" << std::endl;    
}

void    Dog::makeSound( void )
{
    std::cout << "wouf wouf..." << std::endl;
}
