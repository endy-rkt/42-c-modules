/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 09:36:06 by trazanad          #+#    #+#             */
/*   Updated: 2025/01/03 09:50:18 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP

#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria*	_items[4];
		int			*_itemIndex; //only 4
	public:
		~MateriaSource( void );
		MateriaSource( void );
		MateriaSource( MateriaSource & copy );
		MateriaSource  &operator=( MateriaSource & copy );//what if const
		virtual void learnMateria(AMateria* m); //what is no params
		virtual AMateria* createMateria(std::string const & type);
		//getters
		int*	getItemIndex( void );
		AMateria*	getItem(int index);
};

#endif