# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcarmen <rcarmen@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/19 12:30:10 by rcarmen           #+#    #+#              #
#    Updated: 2021/12/25 05:32:10 by rcarmen          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Karen 

INC = Karen.hpp \

SRC = main.cpp Karen.cpp \

OBJ =	$(patsubst %.cpp, %.o, $(SRC))

OBJ_DIR = od/

SRC_PATH = $(addprefix $(SRC_DIR), $(SRC))
OBJ_PATH = $(addprefix $(OBJ_DIR), $(OBJ))
D_PATH = $(patsubst %.o, %.d, $(OBJ_PATH))

CC = c++
CFLAGS = -Wall -Wextra -Werror
OPT_FLUGS = -O0 -g3 -pipe

all: od $(NAME)

$(NAME): $(OBJ_PATH) 
	$(CC) $^ -o $(NAME) $(LIBS)

VPATH = $(SRC_DIR)

$(OBJ_DIR)%.o: %.cpp
	$(CC) $(CFLAGS) $(OPT_FLUGS) -c $< -o $@
	
od:
	@mkdir -p od/

clean:
	rm -rf $(OBJ_DIR);

fclean: clean
	rm -f $(NAME);

re: fclean all

.PHONY: all clean fclean re
