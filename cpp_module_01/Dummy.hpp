/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaquet <pierreolivierpaquet@hotmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 11:05:27 by ppaquet           #+#    #+#             */
/*   Updated: 2024/04/19 11:20:40 by ppaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		DUMMY_HPP_
# define	DUMMY_HPP_

# include	<iostream>
# include	"ATarget.hpp"

class	Dummy : public ATarget {

	private:

	public:
		Dummy( void );	// Default.
		Dummy( Dummy const &src );	// Copy.

		~Dummy( void );	// Default.

		Dummy &operator=( Dummy const &rhs );	// Assignation.
		ATarget	*clone( void ) const;


};	/* Dummy */

#endif	/*	DUMMY_HPP_	*/
