/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaquet <pierreolivierpaquet@hotmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 09:43:20 by ppaquet           #+#    #+#             */
/*   Updated: 2024/04/18 09:54:18 by ppaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

int	main2( void ) {
	// Warlock bob;                            //Does not compile
	Warlock bob("Bob", "the magnificent");  //Compiles
	Warlock jim("Jim", "the nauseating");   //Compiles
	// bob = jim;                              //Does not compile
	// Warlock jack(jim);                      //Does not compile
}

int main ( void ) {

	main2();

	Warlock const richard("Richard", "Mistress of Magma");
	richard.introduce();
	std::cout << richard.getName() << " - " << richard.getTitle() << std::endl;

	Warlock* jack = new Warlock("Jack", "the Long");
	jack->introduce();
	jack->setTitle("the Mighty");
	jack->introduce();

	delete jack;
	return ( EXIT_SUCCESS );

}
