/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaquet <pierreolivierpaquet@hotmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 09:57:23 by ppaquet           #+#    #+#             */
/*   Updated: 2024/04/18 11:31:19 by ppaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include	"ASpell.hpp"

///	======================================================== @section FUNCTION.S

void	ASpell::launch( const ATarget &target ) const {
	target.getHitBySpell( *this );
	return ;
}

/// ========================================================== @section GETTER.S

std::string	ASpell::getName() const {
	return ( this->_name );
}

std::string	ASpell::getEffects() const {
	return ( this->_effects );
}

/// ================================================ @section CONSTR.S & DESTR.S

ASpell::ASpell( void ) :
	_name(		"" ),
	_effects(	"" ){

	return ;
}

ASpell::~ASpell( void ) {

	return ;
}

ASpell::ASpell( std::string name, std::string effects ) :
	_name( name ),
	_effects( effects ) {
	return ;
}

/// ====================================================== @section COPLIEN FORM

ASpell::ASpell( const ASpell &rhs ) {

	return ;
}

ASpell &ASpell::operator=( const ASpell &rhs ) {

	if (this == &rhs) {
		return ( *this );
	}

	return ( *this );
}
