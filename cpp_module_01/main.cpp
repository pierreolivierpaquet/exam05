/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaquet <pierreolivierpaquet@hotmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 10:49:57 by ppaquet           #+#    #+#             */
/*   Updated: 2024/04/19 13:28:44 by ppaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Warlock.hpp"
#include	"ASpell.hpp"
#include	"Fwoosh.hpp"
#include	"Dummy.hpp"

int	main( void ) {

	Warlock richard("Richard", "the Titled");

	Dummy bob;
	Fwoosh* fwoosh = new Fwoosh();
	ASpell *clone = fwoosh->clone();

	richard.learnSpell(clone);

	richard.introduce();
	richard.launchSpell("Fwoosh", bob);

	richard.forgetSpell("Fwoosh");
	richard.launchSpell("Fwoosh", bob);

	return ( EXIT_SUCCESS );
}
