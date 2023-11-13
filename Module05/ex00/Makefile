# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thib <thib@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/30 11:51:44 by tserdet           #+#    #+#              #
#    Updated: 2023/11/13 16:56:12 by thib             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


#-----------------VARIABLES------------------
#--------------------------------------------
# VARIABLES FOR DOT C
SRC = Bureaucrat.cpp main.cpp
# VARIABLES FOR DOT O
SRC_OBJ = $(SRC:.cpp=.o)
# VARIABLES FOR DO A COMPILATION
CC = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = bureaucrat
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
