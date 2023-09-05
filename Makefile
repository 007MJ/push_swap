# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/15 18:06:53 by mnshimiy          #+#    #+#              #
#    Updated: 2023/09/05 19:13:02 by mnshimiy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME   = push_swap
CC     = gcc
CGLAGS = -Wall -Werror -Wextra -g -fsanitize=address
RM     = rm -fr


SRCS    = src/main.c  src/parsing/is_alpha.c src/parsing/is_number.c src/parsing/nb_ok.c src/parsing/not_number.c src/ft_atoi.c src/ft_putstr.c\
		src/list/new_stack.c src/list/add_last.c


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
