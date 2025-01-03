/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 09:04:37 by trazanad          #+#    #+#             */
/*   Updated: 2025/01/03 09:55:17 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::~Character( void )
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_itemIndex[i] != -1)
			delete this->_items[i];
	}
	delete [] _itemIndex;
	std::cout << "Destructor for Character called!" << std::endl;
}

Character::Character( void ):_name("player"), _itemIndex(new int[4])
{
	for (int i = 0; i < 4; i++)
		this->_itemIndex[i] = -1;
	std::cout << "Default constructor for Character called!" << std::endl;
}

Character::Character( std::string const & name ):_name(name), _itemIndex(new int[4])
{
	for (int i = 0; i < 4; i++)
		this->_itemIndex[i] = -1;
	std::cout << "String constructor for Character called!" << std::endl;
}

int*	Character::getItemIndex( void )
{
	return (this->_itemIndex);
}

AMateria*	Character::getItem( int index )
{
	if (this->_itemIndex[index] == -1)
		return (0);
	return (this->_items[index]);
}

Character::Character( Character & copy ):_name(copy.getName())
{
	AMateria*	copyMateria;
	int	*copyItemIndex = copy.getItemIndex();

	for (int i = 0; i < 4; i++)
	{
		this->_itemIndex[i] = copyItemIndex[i];
		if (copyItemIndex[i] != -1)
		{
			copyMateria = copy.getItem(i);
			if (this->_itemIndex[i] != -1)
				delete this->_items[i];
			if (copyMateria)
				this->_items[i] = copyMateria->clone();
			else
				this->_items[i] = 0;
		}
	}
	std::cout << "Copy constructor for Character called!" << std::endl;
}

Character	& Character::operator=( Character & copy )
{
	AMateria*	copyMateria;
	int	*copyItemIndex = copy.getItemIndex();

	this->_name = copy.getName();
	for (int i = 0; i < 4; i++)
	{
		this->_itemIndex[i] = copyItemIndex[i];
		if (copyItemIndex[i] != -1)
		{
			copyMateria = copy.getItem(i);
			if (this->_itemIndex[i] != -1)
				delete this->_items[i];
			if (copyMateria)
				this->_items[i] = copyMateria->clone();
			else
				this->_items[i] = 0;
		}
	}
	std::cout << "Copy assignement for Character called!" << std::endl;
	return (*this);
}

std::string const &	Character::getName() const
{
	return (this->_name);	
}

void	Character::equip(AMateria* m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (this->_itemIndex[i] != 1)
		{
			if (this->_itemIndex[i] == 0)
				delete this->_items[i];
			this->_items[i] = m->clone();
			this->_itemIndex[i] = 1;
			return ;				
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return ;
	if (this->_itemIndex[idx] == -1)
		return ;
	this->_itemIndex[idx] = 0;
}

void	Character::use(int idx, ICharacter& target)
{
	AMateria*	materia;

	if (idx < 0 || idx > 3)
		return ;
	if (this->_itemIndex[idx] != 1)
		return ;
	materia = this->_items[idx];
	if (!materia)
		return ;
	materia->use(target);
}
