/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaquet <pierreolivierpaquet@hotmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 08:49:22 by ppaquet           #+#    #+#             */
/*   Updated: 2024/04/19 12:48:24 by ppaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		WARLOCK_HPP_
# define	WARLOCK_HPP_

# include	<iostream>
# include	<utility>
# include	<map>
# include	"ASpell.hpp"

# ifndef	EXIT_SUCCESS
#  define	EXIT_SUCCESS	0
# endif	/*	EXIT_SUCCESS	*/

# ifndef	EXIT_FAILURE
#  define	EXIT_FAILURE	1
# endif	/*	EXIT_FAILURE	*/

///	========================================================== @section CLASS.ES

typedef	std::map< std::string, ASpell * > spellmap;

class	Warlock {

	private:
		Warlock( void );
		Warlock &operator=( const Warlock &rhs );		// Assignment operand
		Warlock( const Warlock &rhs );					// Reference copy

		std::string	_name;
		std::string	_title;

		spellmap	_spells;								// Spells knowledge.

	public:

		~Warlock( void );

		Warlock( std::string name, std::string title ); // Parameterized

		const std::string	&getName( void ) const;
		const std::string	&getTitle( void ) const;

		void	setTitle( const std::string &title );
		void	introduce( void ) const;

		void	learnSpell( ASpell *spell_to_learn );
		void	forgetSpell( std::string spell_to_forget );
		void	launchSpell( std::string spell, ATarget &victim );

};	/*	Warlock	*/

#endif	/*	WARLOCK_HPP_*/
