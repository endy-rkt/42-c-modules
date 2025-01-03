/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 09:05:00 by trazanad          #+#    #+#             */
/*   Updated: 2025/01/03 08:46:16 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP

#define CHARACTER_HPP

#include "AMateria.hpp"

#include "ICharacter.hpp"

#include "MateriaSource.hpp"

/*
	-delete all materia when destroy
	-when copying or assignement, we use deep copy so we delete the materia first
	Hypothesis:
		1- We don't delete Materia when unequip --> we save index then when equip fill this index?
		2- when use materia on target, it will not be unequiped ?
		3- for equip , we don't use new just shadow copy??
*/
class Character: public ICharacter
{
	private:
		AMateria*	_items[4];
		int			*_itemIndex; //only 4
		std::string	_name;
	public:
		~Character( void );
		Character( void );
		Character( std::string const & name );
		Character( Character & copy );
		Character	&operator=( Character & copy );
		std::string const &	getName() const;
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
		//getters
		int*	getItemIndex( void );
		AMateria*	getItem(int index);
};

#endif