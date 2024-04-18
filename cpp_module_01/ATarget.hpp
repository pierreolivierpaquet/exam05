/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaquet <pierreolivierpaquet@hotmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 10:56:04 by ppaquet           #+#    #+#             */
/*   Updated: 2024/04/18 11:28:54 by ppaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		ATARGET_HPP_
# define	ATARGET_HPP_

# include	<iostream>
# include	"ASpell.hpp"

template < typename T>
void	oprint( const T &to_print ) {
	std::cout << to_print << std::endl;
	return ;
};

///	Forward declaration.
class	ASpell;

///	========================================================== @section CLASS.ES

class	ATarget {
	private:
		std::string	_type;

	public:
		ATarget( void );							// Default constructor.
		virtual ~ATarget( void );					// Default destructor.
		ATarget( const ATarget &rhs );				// Assignment overload.
		ATarget &operator=( const ATarget &rhs );	// Reference copy.
		ATarget( std::string type );				// Parameterized.

		const std::string	&getType( void ) const;

		virtual ATarget *clone( void ) const = 0;	// Pure method.
		void	getHitBySpell( const ASpell &spell ) const;

};	/*	ATarget	*/

#endif	/*	ATARGET_HPP_	*/
