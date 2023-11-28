# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/15 18:06:53 by mnshimiy          #+#    #+#              #
#    Updated: 2023/11/24 20:53:00 by mnshimiy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME   = push_swap
CC     = gcc
CFLAGS = -Wall -Werror -Wextra -g -fsanitize=address
# -fsanitize=address

RM     = rm -fr


SRCS    = src/main.c  src/parsing/is_alpha.c src/parsing/is_number.c src/parsing/nb_ok.c src/parsing/not_number.c src/ft_atoi.c src/ft_putstr.c\
		src/list/new_stack.c src/list/add_last.c src/parsing/is_sort.c src/parsing/duplicate.c src/ft_split.c src/ft_substr.c src/ft_strlen.c src/list/printlst.c src/list/swap_a_b.c\
		src/parsing/min_max.c src/list/push_a.c src/list/push_b.c src/parsing/positive.c\
		src/list/lstsize.c  src/list/add_on_stack.c src/argc_bigger_two.c src/list/swap_list.c  src/list/swap_a_b_stack.c \
		src/list/delete_list.c  src/list/search_list.c src/list/rotate_a.c src/list/reverse_rotate_a.c src/list/rr.c src/list/add_stack.c\
		src/sort/sort_three.c src/sort/sort_five.c src/sort/sort_hundred.c src/sort/hold_number.c src/sort/is_chunks_in_stack.c\
		src/list/put_index.c src/list/reset_on.c src/sort/up_or_down.c src/sort/free_stack.c src/sort/len_by_index.c src/sort/still_number_f.c\
		src/sort/check_stack_b.c src/sort/push_biger.c src/sort/small_number.c src/sort/big_number.c src/sort/five_hundred.c src/sort/small_five.c src/sort/five_up_or_down.c

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
