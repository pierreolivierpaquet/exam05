#ifndef		_HPP_
# define	_HPP_

# include	<iostream>

#endif	/*	_HPP_	*/

class	Name {
	private:

	public:
		Name( void );						// Default constructor.
		~Name( void );						// Default destructor.
		Name( const Name &rhs );			// Assignment overload.
		Name &operator=( const Name &rhs );	// Reference copy.

};	/*	Name	*/

/// ================================================ @section CONSTR.S * DESTR.S

Name::Name( void ) {

	return;
}

Name::~Name( void ) {

	return ;
}

///	====================================================== @section COPLIEN FORM

Name::Name( const Name &rhs ) {
	return ;
}

Name &Name::operator=( const Name &rhs ) {
	if (this == &rhs) {
		return ( *this );
	}

	return ( *this );
}

// =============================================================================

template < typename T>
void	oprint( const T &to_print ) {
	std::cout << to_print << std::endl;
	return ;
};

void	test( void ) {
	std::cout	<< ""
				<< std::endl;
}

///	========================================================== @section CLASS.ES
///	========================================================== @section GETTER.S
///	========================================================== @section SETTER.S
///	======================================================== @section FUNCTION.S