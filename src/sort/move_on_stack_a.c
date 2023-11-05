/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_on_stack_a.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 19:07:41 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/11/04 20:55:39 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int where_is_big(t_stack **stack_b)
{
	t_stack	*curr;
	int		i;
	int		tmp;

	tmp = 0;
	i = 1;
	curr = *stack_b;
	while (curr != NULL)
	{
		if (tmp < curr->nb)
			tmp = curr->nb;
		curr = curr->next;
	}
	curr = *stack_b;
	while (curr != NULL)
	{
		if (tmp == curr->nb)
		{
			printf("curr-> %d\n", curr->nb);
			return (i);
		}
		curr = curr->next;
		i++;
	}
	printf("i %d\n", i);
	return (-1);
}

void	get_on_top(t_stack **stack_b)
{
	int	i;
	int	move;

	i = 1;
	move =  where_is_big(stack_b);
	printf("move %d \n", move);
	while (i <= move)
	{
		reverse_rotate_a(stack_b, "rb\n");
		i++;
		// printf("--in--\n");
	}
	printf("---\n");
}

void	move_on_stack_a(t_stack **stack, t_stack **stack_b)
{
	get_on_top(stack_b);
	push_a(stack_b, stack);
}
