/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 05:21:09 by trazanad          #+#    #+#             */
/*   Updated: 2025/01/02 10:46:04 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::~Brain( void )
{
	delete [] this->ideas;
	std::cout << "Destructor for brain called!" << std::endl;
}

Brain::Brain( void ):ideas(new std::string[100])
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "";
	std::cout << "Default constructor for brain called!" << std::endl;
}

Brain::Brain( const Brain & copy ):ideas(new std::string[100])
{
	std::string	*copyIdeas = copy.getIdeas();
	for (int i = 0; i < 100; i++)
		this->ideas[i] = copyIdeas[i];
	std::cout << "Copy constructor for brain called!" << std::endl;
}

Brain::Brain( const std::string & str ):ideas(new std::string[100])
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = str;
	std::cout << "String constructor for brain called!" << std::endl;
}

Brain &Brain::operator=( const Brain & copy )
{
	std::string	*copyIdeas;

	if (this != &copy)
	{
		delete [] this->ideas;
		copyIdeas = copy.getIdeas();
		this->ideas = new std::string[100];
		for (int i = 0; i < 100; i++)
			this->ideas[i] = copyIdeas[i];
	}
	std::cout << "Copy assignement for brain called!" << std::endl;
	return (*this);
}

std::string*	Brain::getIdeas( void ) const
{
	return (this->ideas);
}

void	Brain::setIdeas(const std::string *newIdeas)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = newIdeas[i];
}

void	Brain::printIdeas( void ) const
{
	std::cout << "Ideas:" << std::endl;
	for (int i = 0; i < 100; i++)
		std::cout << this->ideas[i] << std::endl;
}
