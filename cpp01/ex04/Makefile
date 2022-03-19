# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ralena <ralena@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/12 11:54:55 by ralena            #+#    #+#              #
#    Updated: 2022/03/13 17:36:32 by ralena           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= main.cpp StringReplacer.cpp
OBJS			= $(SRCS:.cpp=.o)

CXX				= c++
RM				= rm -f
CXXFLAGS		= -Wall -Wextra -Werror -std=c++98

HEADERS			= StringReplacer.hpp

NAME			= ex04

all:			$(NAME)

$(NAME):		$(OBJS) $(HEADERS)
				$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
