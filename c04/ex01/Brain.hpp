/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trazanad <trazanad@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 05:21:16 by trazanad          #+#    #+#             */
/*   Updated: 2025/01/02 06:20:55 by trazanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP

#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
	protected:
		std::string	*ideas;
	public:
		virtual ~Brain( void );
		Brain( void );
		Brain( const Brain & copy );
		Brain( const std::string & str );
		Brain &operator=( const Brain & copy );
		std::string	*getIdeas( void ) const;
		void	setIdeas(const std::string *newIdeas);
		void	printIdeas( void ) const;
};

#endif