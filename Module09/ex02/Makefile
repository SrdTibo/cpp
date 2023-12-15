# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/30 11:51:44 by tserdet           #+#    #+#              #
#    Updated: 2023/12/15 14:36:02 by tserdet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


#-----------------VARIABLES------------------
#--------------------------------------------
# VARIABLES FOR DOT C
SRC = main.cpp PmergeMe.cpp
# VARIABLES FOR DOT O
SRC_OBJ = $(SRC:.cpp=.o)
# VARIABLES FOR DO A COMPILATION
CC = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
NAME =	PmergeMe
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
