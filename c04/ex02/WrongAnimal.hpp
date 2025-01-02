/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 04:52:53 by trazanad          #+#    #+#             */
/*   Updated: 2025/01/02 04:58:01 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP

#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
	protected:
		std::string	type;

	public:
		//constructor and destructor
		virtual	~WrongAnimal( void );
		WrongAnimal( void );
		WrongAnimal( const std::string & type);
		WrongAnimal( const WrongAnimal & copy );
		WrongAnimal & operator=(const WrongAnimal & copy);

		//method
		std::string	getType( void ) const;
		void	makeSound( void ) const;
};

#endif