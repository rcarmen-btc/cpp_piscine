#ifndef KAREN_HPP
# define KAREN_HPP
# include <iostream>

class Karen {

	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
	void (Karen::*comments[256])(); 
public:
	Karen();
	void defunck();
	void complain( std::string level );
};



#endif