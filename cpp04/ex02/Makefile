# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ralena <ralena@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/05 18:07:58 by ralena            #+#    #+#              #
#    Updated: 2022/04/05 20:24:42 by ralena           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= ex02

SRCS		= 	sources/Animal.cpp		\
				sources/Cat.cpp			\
				sources/Dog.cpp			\
				sources/WrongAnimal.cpp	\
				sources/WrongCat.cpp	\
				sources/Brain.cpp		\
				sources/main.cpp
OBJS		= $(SRCS:.cpp=.o)
DEP 		= $(OBJS:.o=.d)

CXX			= c++
RM			= rm -f
CXXFLAGS	= -Wall -Wextra -Werror -I. -MMD -std=c++98

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
			$(RM) $(OBJS) $(DEP)

fclean: clean
			$(RM) $(NAME)

execute:	$(NAME)
			echo -----------------------------------
			leaks --atExit -- ./ex02

re:	fclean all

.PHONY:	all clean fclean re

include $(wildcard $(DEP))