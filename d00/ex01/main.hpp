#ifndef MAIN_HPP
# define MAIN_HPP
# include <iostream>
# include <string.h>
# include <iomanip>
# include "ClassContact.hpp"
# include "ClassPhoneliber.hpp"

void	prompt(Phoneliber &book);
void	add_contact(Phoneliber &book);
int		search_contact(Phoneliber book);
void	exit_phoneliber();

#endif