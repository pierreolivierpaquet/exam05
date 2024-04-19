/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaquet <pierreolivierpaquet@hotmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 08:56:15 by ppaquet           #+#    #+#             */
/*   Updated: 2024/04/19 12:50:25 by ppaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

/// ======================================================== @section FUNCTION.S

void	Warlock::introduce( void ) const {
	std::cout	<< getName()
				<< ": I am "
				<< this->getName()
				<< ", "
				<< this->getTitle()
				<< "!"
				<< std::endl;
	return ;
}

void	Warlock::learnSpell( ASpell *spell_to_learn ) {

	if (spell_to_learn == NULL) {
		return ;
	}

	if (this->_spells.find( spell_to_learn->getName() ) == this->_spells.end()){
		this->_spells.insert( std::make_pair( spell_to_learn->getName(), spell_to_learn ) );
	}
	return ;
}

void	Warlock::forgetSpell( std::string spell_to_forget ) {
	spellmap::iterator it = this->_spells.find( spell_to_forget );
	if ( it != this->_spells.end() ) {
		this->_spells.erase( it );
	}
	return ;
}

void	Warlock::launchSpell( std::string spell, ATarget &victim ) {

	spellmap::iterator it = this->_spells.find( spell );
	if (it == this->_spells.end()) {
		return ;
	}
	victim.getHitBySpell( *it->second );
	return ;
}

/// ========================================================== @section SETTER.S

void	Warlock::setTitle( const std::string &title ) {

	this->_title = title;
	return ;
}

/// ========================================================== @section GETTER.S

const std::string	&Warlock::getName( void ) const {

	return ( this->_name );
}

const std::string	&Warlock::getTitle( void ) const {

	return ( this->_title );
}

/// ================================================ @section CONSTR.S & DESTR.S

Warlock::Warlock( void ) {

	return ;
}

Warlock::~Warlock( void ) {
	std::cout	<< this->getName()
				<< ": My job here is done!"
				<< std::endl;
	return;
}


Warlock::Warlock( std::string name, std::string title ) :
	_name(	name ),
	_title(	title ) {
	std::cout	<< this->getName()
				<< ": This looks like another boring day."
				<< std::endl;
	return ;
}

/// ====================================================== @section COPLIEN FORM

Warlock &Warlock::operator=( const Warlock &rhs ) {

	/*	Check for self assignment	*/
	if( this == &rhs ) {
		return (*this);
	}

	return ( *this );
}

Warlock::Warlock( const Warlock &rhs ) {
	this->_name		=	rhs.getName();
	this->_title	=	rhs.getTitle();
	return ;
}