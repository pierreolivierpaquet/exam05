/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaquet <pierreolivierpaquet@hotmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 08:49:22 by ppaquet           #+#    #+#             */
/*   Updated: 2024/04/18 09:52:51 by ppaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		WARLOCK_HPP_
# define	WARLOCK_HPP_

# include	<iostream>

# ifndef	EXIT_SUCCESS
#  define	EXIT_SUCCESS	0
# endif	/*	EXIT_SUCCESS	*/

# ifndef	EXIT_FAILURE
#  define	EXIT_FAILURE	1
# endif	/*	EXIT_FAILURE	*/

class	Warlock {

	private:
		Warlock( void );
		Warlock &operator=( const Warlock &rhs );			// Operand overload
		Warlock( const Warlock &rhs );						// Reference copy

		std::string	_name;
		std::string	_title;

	public:
		~Warlock( void );

		Warlock( std::string name, std::string title ); 	// Parameterized

		const std::string	&getName( void ) const;
		const std::string	&getTitle( void ) const;

		void	setTitle( const std::string &title );
		void	introduce( void ) const;

};	/*	Warlock	*/

#endif	/*	WARLOCK_HPP_*/
