/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaquet <pierreolivierpaquet@hotmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:36:29 by ppaquet           #+#    #+#             */
/*   Updated: 2024/04/19 11:15:07 by ppaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Fwoosh.hpp"

///	======================================================== @section FUNCTION.S

ASpell	*Fwoosh::clone( void ) const {

	return ( new Fwoosh );
}

///	================================================= @section CONSTR. & DESTR.S

Fwoosh::Fwoosh( void ) : ASpell( "Fwoosh", "fwooshed" ) {

	return;
}

Fwoosh::~Fwoosh( void ) {

	return ;
}


///	====================================================== @section COPLIEN FORM

Fwoosh::Fwoosh( const Fwoosh &rhs ) :
	ASpell( rhs.getEffects(), rhs.getEffects() ) {
	return ;
}

Fwoosh &Fwoosh::operator=( const Fwoosh &rhs ) {
	if (this == &rhs) {
		return ( *this );
	}

	return ( *this );
}
