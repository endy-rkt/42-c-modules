/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 11:25:49 by trazanad          #+#    #+#             */
/*   Updated: 2024/11/30 15:31:58 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::~Cat( void )
{
    std::cout << "Destructor for Cat called!" << std::endl;
}

Cat::Cat( void ): Animal()
{
    this->type = "Cat";
    std::cout << "Default constructor for Cat called!" << std::endl;
}

Cat::Cat( const Cat & copy ): Animal( copy )
{
    std::cout << "Copy constructor for Cat called!" << std::endl; 
}

Cat  & Cat::operator=( const Cat & copy )
{
    if (this != &copy)
        this->type = copy.getType();
    std::cout << "Copy assignment for Cat called!" << std::endl;    
}

void    Cat::makeSound( void )
{
    std::cout << "meow meow..." << std::endl;
}
