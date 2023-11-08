/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   go_place_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 23:20:36 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/11/07 20:51:29 by mnshimiy         ###   ########.fr       */
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
	while (position >= i)
	{
		// Le dernier élément devient le premier.
		reverse_rotate_a(stack, "rra\n");
		i++;
	}
	push_a(next_b, stack);
	i++;
	while (i > 1)
	{
		rotate_a(stack, "ra\n");
		i--;
	}
	(void)stack;
}

void	re_make_move(int position, t_stack **next_b, t_stack **stack)
{
	int i;
	int	j;

	j = 1;
	i = 1;
	// printf("le nombre que l'on va push  -> %d\n", (*next_b)->nb);
	printlst(stack);
	while (position >= i)
	{
		//Le premier élément devient le dernier.
		rotate_a(stack, "ra\n");
		i++;
	}
	push_a(next_b, stack);
	while (i > j)
	{
		// Le dernier élément devient le premier.
		// printf("%d \n", i);
		reverse_rotate_a(stack, "rra\n");
		j++;
	}
	(void)next_b, (void)position;
}

void	place(t_stack **next_b, t_stack **stack, int len_stack_a)
{
	int	position;

	// printf("len of b place-function %d \n", lstsize(*next_b));
	// printf("len of a place-function %d \n", lstsize(*stack));
	position = where_place(next_b, stack);
	// (void)len_stack_a;
	if (position == -1 || position == 1)
	{
		push_a(next_b, stack);
		if (stack != NULL)
		{
			if ((*stack)->nb > (*stack)->next->nb)
			{
				swap_a_b(*stack, "sa\n");
			}
		}
	}
	if (position > len_stack_a / 2 && position != 1 && position != -1)
	{
		make_move(position, next_b, stack);
	}
	if (position <= len_stack_a / 2 && position != -1 && position != 1)
	{
		re_make_move(position, next_b, stack);
	}
}

void	go_place_number(t_stack **stack, t_stack **stack_b)
{
	// printf("len of b go-function %d \n", lstsize(*stack_b));
	// printf("len of a go-function %d \n", lstsize(*stack));
	place(stack_b, stack, lstsize(*stack));
}
