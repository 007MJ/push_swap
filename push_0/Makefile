# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/26 18:06:20 by mnshimiy          #+#    #+#              #
#    Updated: 2023/10/26 18:07:57 by mnshimiy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME   = push_swap
CC     = gcc
CFLAGS = -Wall -Werror -Wextra -g

RM     = rm -fr

SRCS   = 	src/main/main.c

OBJS = $(SRCS:.c=.o)


all : $(NAME)

$(NAME):$(OBJS)
	$(CC) $(OBJS) $(CFLAGS) -o $@

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $^

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all
