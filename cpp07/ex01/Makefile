# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ralena <ralena@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/09 21:44:00 by ralena            #+#    #+#              #
#    Updated: 2022/04/09 23:26:35 by ralena           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ex01

SRC			=	main.cpp 

SRCO		=	$(SRC:.cpp=.o)

DEPS		=	$(SRCO:.o=.d)

FLAGS		=	-Wall -Wextra -Werror -std=c++98

CPPFLAGS	=	-MMD

all: $(NAME)

%.o: %.cpp Makefile
	c++ ${FLAGS} ${CPPFLAGS} -o $@ -c $<

$(NAME): $(SRCO)
	c++ ${FLAGS} ${CPPFLAGS} -o ${NAME} ${SRCO}

clean:
	rm -f $(SRCO) $(DEPS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

-include $(DEPS)