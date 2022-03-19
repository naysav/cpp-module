# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ralena <ralena@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/12 11:54:55 by ralena            #+#    #+#              #
#    Updated: 2022/03/13 15:58:16 by ralena           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
OBJS			= $(SRCS:.cpp=.o)

CXX				= c++
RM				= rm -f
CXXFLAGS		= -Wall -Wextra -Werror -std=c++98

HEADERS			= HumanA.hpp HumanB.hpp Weapon.hpp

NAME			= ex03

all:			$(NAME)

$(NAME):		$(OBJS) $(HEADERS)
				$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

leaks:			$(NAME)
				leaks --atExit -- ./ex03

.PHONY:			all clean fclean re
