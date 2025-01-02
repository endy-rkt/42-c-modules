/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 08:49:50 by trazanad          #+#    #+#             */
/*   Updated: 2025/01/02 09:33:54 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::~AMateria( void )
{
	std::cout << "Destructor for AMateria called!" << std::endl;
}

AMateria::AMateria( void ):type("")
{
	std::cout << "Default constructor for AMateria called!" << std::endl;
}

AMateria::AMateria(std::string const & type):type(type)
{
	std::cout << "String constructor for AMateria called!" << std::endl;
}

AMateria::AMateria( AMateria const & copy ):type(copy.getType())
{
	std::cout << "Copy constructor for AMateria called!" << std::endl;
}

AMateria &AMateria::operator=( AMateria const & copy )
{
	if (this != &copy)
		this->type = copy.getType();
	std::cout << "Copy assignement for AMateria called!" << std::endl;
	return (*this);
}

std::string const &	AMateria::getType() const
{
	return  (this->type);	
}

void	AMateria::setType( std::string const & type )
{
	this->type = type;
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "Base Materia, do nothing to " << target.getName() << std::endl;
}
