/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 09:01:42 by trazanad          #+#    #+#             */
/*   Updated: 2025/01/02 09:50:41 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::~Ice( void )
{
	std::cout << "Destructor for Ice called!" << std::endl;
}

Ice::Ice( void ):AMateria("ice")
{
	std::cout << "Default constructor for Ice called!" << std::endl;
}

Ice::Ice( Ice const & copy ):AMateria(copy.getType())
{
	std::cout << "Copy constructor for Ice called!" << std::endl;
}

Ice &Ice::operator=( Ice const & copy )
{
	if (this != &copy)
		this->type = copy.getType();
	std::cout << "Copy assignement for Ice called!" << std::endl;
	return (*this);
}

AMateria*	Ice::clone() const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
