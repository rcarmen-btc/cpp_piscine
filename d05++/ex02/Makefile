# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcarmen <rcarmen@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/19 12:30:10 by rcarmen           #+#    #+#              #
#    Updated: 2022/01/09 13:03:30 by rcarmen          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat

INC = Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp\

SRC = main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp\

OBJ =	$(patsubst %.cpp, %.o, $(SRC))

OBJ_DIR = od/

SRC_PATH = $(addprefix $(SRC_DIR), $(SRC))
OBJ_PATH = $(addprefix $(OBJ_DIR), $(OBJ))
D_PATH = $(patsubst %.o, %.d, $(OBJ_PATH))

CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98
OPT_FLUGS = -O0 -g3 -pipe -g

all: od $(NAME)

$(NAME): $(OBJ_PATH) 
	$(CC) $^ -o $(NAME) $(LIBS)

VPATH = $(SRC_DIR)

$(OBJ_DIR)%.o: %.cpp $(INC)
	$(CC) $(CFLAGS) $(OPT_FLUGS) -c $< -o $@
	
od:
	@mkdir -p od/

clean:
	rm -rf $(OBJ_DIR);

fclean: clean
	rm -f $(NAME);

re: fclean all

.PHONY: all clean fclean re
