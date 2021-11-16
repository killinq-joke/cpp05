# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mout <mout@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/14 16:08:02 by ztouzri           #+#    #+#              #
#    Updated: 2021/11/16 05:35:11 by mout             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= clang++
CFLAGS	= -Wall -Wextra -Werror
SRCS	= main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp
OBJS	= $(SRCS:cpp=o)
NAME	= exec

.cpp.o:
	$(CC) $(CFLAGS) $(SRCS) -c 

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
