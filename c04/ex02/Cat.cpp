/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 11:25:49 by trazanad          #+#    #+#             */
/*   Updated: 2025/01/02 06:41:15 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::~Cat( void )
{
    delete this->brain;
    std::cout << "Destructor for Cat called!" << std::endl;
}

Cat::Cat( void ): AAnimal("Cat"), brain(new Brain("Cat idea"))
{
    std::cout << "Default constructor for Cat called!" << std::endl;
}

Cat::Cat( const Cat & copy ): AAnimal( copy ), brain(copy.getBrain())
{
    std::cout << "Copy constructor for Cat called!" << std::endl; 
}

Cat  & Cat::operator=( const Cat & copy )
{
    if (this != &copy)
    {
        this->type = copy.getType();
        this->brain = copy.getBrain();
    }
    std::cout << "Copy assignment for Cat called!" << std::endl;
    return (*this); 
}

Brain*  Cat::getBrain( void ) const
{
    return (this->brain);
}

void    Cat::makeSound( void ) const
{
    std::cout << "meow meow..." << std::endl;
}
