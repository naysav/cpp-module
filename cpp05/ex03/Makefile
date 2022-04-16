# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ralena <ralena@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/05 18:07:58 by ralena            #+#    #+#              #
#    Updated: 2022/04/09 19:04:09 by ralena           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= ex03

SRCS		= 	Bureaucrat.cpp				\
				Form.cpp 					\
				PresidentialPardonForm.cpp 	\
				RobotomyRequestForm.cpp 	\
				ShrubberyCreationForm.cpp 	\
				Intern.cpp 					\
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

execute:	$(NAME)
			echo -----------------------------------
			leaks --atExit -- ./ex03

re:	fclean all

.PHONY:	all clean fclean re

include $(wildcard $(DEP))