/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 08:48:05 by trazanad          #+#    #+#             */
/*   Updated: 2025/01/02 09:39:37 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP

#define AMATERIA_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string	type;
	public:
		virtual ~AMateria( void );
		AMateria( void );
		AMateria( std::string const & type );
		AMateria( AMateria const & copy );
		AMateria &operator=( AMateria const & copy );
		std::string const & getType() const; //Returns the materia type
		void	setType( std::string const & type );
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif