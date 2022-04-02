# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ralena <ralena@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/19 18:17:51 by ralena            #+#    #+#              #
#    Updated: 2022/04/02 12:14:00 by ralena           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= ex02

SRCS		= Fixed.cpp	main.cpp

OBJS		= $(SRCS:.cpp=.o)

DEP 		= $(OBJS:.o=.d)

CXX				= c++
RM				= rm -f
CXXFLAGS		= -Wall -Wextra -Werror -I. -MMD -std=c++98

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