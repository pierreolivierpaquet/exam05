/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaquet <pierreolivierpaquet@hotmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 11:05:25 by ppaquet           #+#    #+#             */
/*   Updated: 2024/04/19 11:20:16 by ppaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Dummy.hpp"

///	======================================================== @section FUNCTION.S

ATarget	*Dummy::clone( void ) const {

	return ( new Dummy );
}

///	================================================= @section CONSTR. & DESTR.S

Dummy::Dummy( void ) : ATarget( "Target Practice Dummy" ) {

	return;
}

Dummy::~Dummy( void ) {

	return ;
}

///	====================================================== @section COPLIEN FORM

Dummy::Dummy( const Dummy &rhs ) : ATarget( rhs.getType() ) {

	return ;
}

Dummy &Dummy::operator=( const Dummy &rhs ) {

	if (this == &rhs) {
		return ( *this );
	}

	return ( *this );
}
