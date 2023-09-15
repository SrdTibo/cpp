# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/30 11:51:44 by tserdet           #+#    #+#              #
#    Updated: 2023/09/15 10:12:58 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


#-----------------VARIABLES------------------
#--------------------------------------------
# VARIABLES FOR DOT C
SRC = main.cpp file.cpp
# VARIABLES FOR DOT O
SRC_OBJ = $(SRC:.cpp=.o)
# VARIABLES FOR DO A COMPILATION
CC = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = file
RM = rm -rf
#--------------------------------------------
#-----------------EXECUTING------------------
#--------------------------------------------
all : $(NAME)

$(NAME) : $(SRC_OBJ)
	$(CC) $(CXXFLAGS) $(SRC_OBJ) -o $(NAME)

clean :
	$(RM) $(SRC_OBJ)

fclean :	clean
	$(RM) $(NAME)

re :	fclean all

.PHONY :	all clean fclean re
#--------------------------------------------
