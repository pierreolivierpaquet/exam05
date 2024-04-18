/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaquet <pierreolivierpaquet@hotmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 08:56:15 by ppaquet           #+#    #+#             */
/*   Updated: 2024/04/18 10:48:08 by ppaquet          ###   ########.fr       */
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