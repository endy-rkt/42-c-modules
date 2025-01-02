/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 09:05:00 by trazanad          #+#    #+#             */
/*   Updated: 2025/01/02 10:14:04 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP

#define CHARACTER_HPP

#include "AMateria.hpp"

#include "ICharacter.hpp"

class Character: public ICharacter
{
	private:
		AMateria*	_items[4];
		std::string	_name;
	public:
		~Character( void );
		Character( void );
		Character( std::string const & name );
		Character( ICharacter const & copy );
		Character	&operator=( ICharacter const & copy );
		std::string const &	getName() const;
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
};

#endif