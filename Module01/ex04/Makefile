# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/30 11:51:44 by tserdet           #+#    #+#              #
#    Updated: 2023/09/14 11:00:23 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


#-----------------VARIABLES------------------
#--------------------------------------------
# VARIABLES FOR DOT C
PHONEBOOK = main.cpp file.cpp
# VARIABLES FOR DOT O
PHONEBOOK_OBJ = $(PHONEBOOK:.cpp=.o)
# VARIABLES FOR DO A COMPILATION
CC = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = file
RM = rm -rf
#--------------------------------------------
#-----------------EXECUTING------------------
#--------------------------------------------
all : $(NAME)

$(NAME) : $(PHONEBOOK_OBJ)
	$(CC) $(CXXFLAGS) $(PHONEBOOK_OBJ) -o $(NAME)

clean :
	$(RM) $(PHONEBOOK_OBJ)

fclean :	clean
	$(RM) $(NAME)

re :	fclean all

.PHONY :	all clean fclean re
#--------------------------------------------
