/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaquet <pierreolivierpaquet@hotmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:36:31 by ppaquet           #+#    #+#             */
/*   Updated: 2024/04/19 12:53:59 by ppaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		FWOOSH_HPP_
# define	FWOOSH_HPP_

# include	<iostream>
# include	"ASpell.hpp"

class Fwoosh : public ASpell {

	private:

	public:
		Fwoosh( void );	// Default.
		~Fwoosh( void );	// Default.

		Fwoosh( Fwoosh const &src );	// Copy.
		Fwoosh &operator=( Fwoosh const &rhs );	// Assignation.

		ASpell *clone( void ) const;

};	/* Fwoosh */

#endif	/*	FWOOSH_HPP_	*/
