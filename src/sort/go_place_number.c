/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   go_place_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 23:20:36 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/11/06 21:28:39 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int		where_place(t_stack **next_b, t_stack **stack)
{
	t_stack		*i;
	t_stack *curr;
	int		j;

	j = 1;
	i = NULL;
	curr = *stack;
	while (curr != NULL)
	{
		if ((*next_b)->nb > curr->nb)
			i = curr;
		curr = curr->next;
	}
	curr = *stack;
	while (curr != NULL && i != NULL)
	{
		if (i->nb == curr->nb)
		{
			printf("number ->%d which position %d\n", i->nb, j);
			printlst(stack);
			return (j);
		}
		j++;
		curr = curr->next;
	}
	return (1);
}

void	make_move(int position, t_stack **next_b, t_stack **stack)
{
	int i;

	i = 1;
	position = lstsize(*stack) - position;
	while (position <= i)
	{
		reverse_rotate_a(stack, "rra\n");
		i++;
	}
	push_a(stack, next_b);
	i++;
	while (i >= 1)
	{
		rotate_a(stack, "ra\n");
		i--;
	}
}

void	re_make_move(int position, t_stack **next_b, t_stack **stack)
{
	int i;

	i = 1;
	while (position <= i)
	{
		rotate_a(stack, "ra\n");
		i++;
	}
	push_a(stack, next_b);
	while (i >= 1)
	{
		reverse_rotate_a(stack, "rra\n");
		i--;
	}
}

void place(t_stack **next_b, t_stack **stack, int len_stack_a)
{
	int	position;

	position = where_place(next_b, stack);
	(void)len_stack_a;
	// printf("len of len stack stack_b %d\n", lstsize(*next_b));
	// printf("position of number %d\n", position);
	// printlst(stack);
	// printlst(next_b);
	if (position == -1 || position == 1)
	{

		push_a(next_b, stack);
	}
	// if (position >= len_stack_a / 2)
	// 	make_move(position, next_b, stack);
	// if (position < len_stack_a / 2 && position != -1 && position != 1)
	// 	re_make_move(position, next_b, stack);

}

void	go_place_number(t_stack **next_b, t_stack **stack)
{
	place(next_b, stack, lstsize(*stack));
}
