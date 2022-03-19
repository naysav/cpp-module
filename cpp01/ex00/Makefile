# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ralena <ralena@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/12 11:54:55 by ralena            #+#    #+#              #
#    Updated: 2022/03/12 14:50:50 by ralena           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJS			= $(SRCS:.cpp=.o)

CXX				= c++
RM				= rm -f
CXXFLAGS		= -Wall -Wextra -Werror -I. -std=c++98

HEADERS			= Zombie.hpp

NAME			= ex00

all:			$(NAME)

$(NAME):		$(OBJS) $(HEADERS)
				$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

leaks:			$(NAME)
				leaks --atExit -- ./ex00

.PHONY:			all clean fclean re
