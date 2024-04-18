/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaquet <pierreolivierpaquet@hotmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 09:57:25 by ppaquet           #+#    #+#             */
/*   Updated: 2024/04/18 11:29:29 by ppaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		ASPELL_HPP_
# define	ASPELL_HPP_

# include	<iostream>
# include	"ATarget.hpp"

///	Forward declaration
class ATarget;

///	========================================================== @section CLASS.ES

class	ASpell {

	private:
		ASpell( void );									// Default constructor.
		std::string	_name;
		std::string	_effects;

	public:
		virtual ~ASpell( void );						// Default destructor.
		ASpell &operator=( const ASpell &rhs );			// Assignment operator
		ASpell( const ASpell &rhs );					// Reference copy

		ASpell( std::string name, std::string effects );	// Parameterized

		std::string	getName( void ) const;
		std::string	getEffects( void ) const;

		virtual ASpell *clone( void ) const = 0;		// Pure method

		void	launch( const ATarget &target ) const;

};	/*	ASpell	*/

#endif	/*	ASPELL_HPP_	*/
