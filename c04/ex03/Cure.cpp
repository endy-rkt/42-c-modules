/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 09:03:15 by trazanad          #+#    #+#             */
/*   Updated: 2025/01/02 09:50:49 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::~Cure( void )
{
	std::cout << "Destructor for Cure called!" << std::endl;
}

Cure::Cure( void ):AMateria("cure")
{
	std::cout << "Default constructor for Cure called!" << std::endl;
}

Cure::Cure( Cure const & copy ):AMateria(copy.getType())
{
	std::cout << "Copy constructor for Cure called!" << std::endl;
}

Cure &Cure::operator=( Cure const & copy )
{
	if (this != &copy)
		this->type = copy.getType();
	std::cout << "Copy assignement for Cure called!" << std::endl;
	return (*this);
}

AMateria*	Cure::clone() const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
