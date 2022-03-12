# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ralena <ralena@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/06 17:28:11 by ralena            #+#    #+#              #
#    Updated: 2022/03/12 11:40:19 by ralena           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= main.cpp PhoneBook.cpp Contact.cpp
OBJS			= $(SRCS:.cpp=.o)

CXX				= c++
RM				= rm -f
CXXFLAGS		= -Wall -Wextra -Werror -I. -std=c++98

HEADERS			= Contact.hpp PhoneBook.hpp

NAME			= directory

all:			$(NAME)

$(NAME):		$(OBJS) $(HEADERS)
				$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
