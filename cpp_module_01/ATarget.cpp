/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaquet <pierreolivierpaquet@hotmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 10:57:29 by ppaquet           #+#    #+#             */
/*   Updated: 2024/04/18 11:29:03 by ppaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ATarget.hpp"

///	======================================================== @section FUNCTION.S

void	ATarget::getHitBySpell( const ASpell &spell ) const {
	std::cout	<< this->getType()
				<< " has been "
				<< spell.getEffects()
				<< "!"
				<< std::endl;
	return ;
}

///	========================================================== @section GETTER.S

const std::string	&ATarget::getType( void ) const {
	return ( this->_type );
}

/// ================================================ @section CONSTR.S * DESTR.S

ATarget::ATarget( void ) {

	return;
}

ATarget::~ATarget( void ) {

	return ;
}

ATarget::ATarget( std::string type ) :
	_type( type ) {

	return ;
}

///	====================================================== @section COPLIEN FORM

ATarget::ATarget( const ATarget &rhs ) {
	return ;
}

ATarget &ATarget::operator=( const ATarget &rhs ) {
	if (this == &rhs) {
		return ( *this );
	}

	return ( *this );
}
