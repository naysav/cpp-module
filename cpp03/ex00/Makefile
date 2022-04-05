# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ralena <ralena@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/02 17:06:47 by ralena            #+#    #+#              #
#    Updated: 2022/04/02 17:10:17 by ralena           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= ex00

SRCS		= 	ClapTrap.cpp \
				main.cpp
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

re:	fclean all

.PHONY:	all clean fclean re

include $(wildcard $(DEP))