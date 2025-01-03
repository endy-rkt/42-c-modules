/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 09:36:53 by trazanad          #+#    #+#             */
/*   Updated: 2025/01/03 09:45:02 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::~MateriaSource( void )
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_itemIndex[i] != 0)
			delete this->_items[i];
	}
	delete [] _itemIndex;
	std::cout << "Destructor for MateriaSource called!" << std::endl;
}

MateriaSource::MateriaSource( void ):_itemIndex(new int[4])
{
	for (int i = 0; i < 4; i++)
		this->_itemIndex[i] = 0;
	std::cout << "Default constructor for MateriaSource called!" << std::endl;
}

int*	MateriaSource::getItemIndex( void )
{
	return (this->_itemIndex);
}

AMateria*	MateriaSource::getItem( int index )
{
	if (this->_itemIndex[index] == 0)
		return (0);
	return (this->_items[index]);
}

MateriaSource::MateriaSource( MateriaSource & copy )
{
	AMateria*	copyMateria;
	int	*copyItemIndex = copy.getItemIndex();

	for (int i = 0; i < 4; i++)
	{
		this->_itemIndex[i] = copyItemIndex[i];
		if (copyItemIndex[i] == 1)
		{
			copyMateria = copy.getItem(i);			
			delete this->_items[i];
			if (copyMateria)
				this->_items[i] = copyMateria->clone();
			else
				this->_items[i] = 0;
		}
	}
	std::cout << "Copy constructor for MateriaSource called!" << std::endl;
}

MateriaSource	& MateriaSource::operator=( MateriaSource & copy )
{
	AMateria*	copyMateria;
	int	*copyItemIndex = copy.getItemIndex();

	for (int i = 0; i < 4; i++)
	{
		this->_itemIndex[i] = copyItemIndex[i];
		if (copyItemIndex[i] == 1)
		{
			copyMateria = copy.getItem(i);
			delete this->_items[i];
			if (copyMateria)
				this->_items[i] = copyMateria->clone();
			else
				this->_items[i] = 0;
		}
	}
	std::cout << "Copy assignement for MateriaSource called!" << std::endl;
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (this->_itemIndex[i] == 0)
		{
			this->_items[i] = m;
			this->_itemIndex[i] = 1;
			return ;				
		}
	}
} 

AMateria* MateriaSource::createMateria(std::string const & type)
{
	AMateria *materia;

	for (int i = 0; i < 4 ; i++)
	{
		if (this->_itemIndex[i] == 1)
		{
			materia = this->_items[i];
			if (materia->getType() == type)
				return (materia->clone());				
		}
	}
	return (0);
}
