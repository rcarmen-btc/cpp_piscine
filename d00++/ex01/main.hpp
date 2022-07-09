#ifndef MAIN_HPP
# define MAIN_HPP
# include <iostream>
# include <string.h>
# include <iomanip>
# include <stdlib.h>
# include "ClassContact.hpp"
# include "ClassPhoneliber.hpp"

void	prompt(Phoneliber &book);
int		add_contact(Phoneliber &book);
int		search_contact(Phoneliber book);
void	exit_phoneliber();

#endif