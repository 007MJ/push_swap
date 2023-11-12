/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_hundred.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 21:18:24 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/11/11 15:31:21 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

// void	get_list_up(t_stack **stack, t_stack *index_list)
// {
// 	int	i;

// 	i = 1;
// 	if (index_list != NULL)
// 	{
// 		if (index_list ->ra_rra == 1)
// 		{
// 		while (index_list->move > i)
// 		{
// 			rotate_a(stack, "ra\n");
// 			i++;
// 		}
// 		}
// 		if (index_list->ra_rra == 2)
// 		{
// 			while (index_list->move >= i)
// 			{
// 				reverse_rotate_a(stack, "rra\n");
// 				i++;
// 			}
// 		}
// 	}
// }

// void	up_down(t_stack **stack)
// {
// 	int			i;
// 	t_stack		*last;

// 	i = 0;
// 	last = search_list(*stack, lstsize(*stack));
// 	while (i == 0 && (*stack)->nb > last->nb && lstsize(*stack) > 0)
// 	{
// 		if ((*stack)->nb < last->nb)
// 			i = 1;
// 		else
// 		{
// 			if ((*stack)->nb > last->nb && i == 0)
// 				rotate_a(stack, "ra\n");
// 		}
// 	}
// }

void let_s(t_stack **stack)
{
	t_stack *current;

	current = *stack;
	while (current != NULL)
	{
		// printf("index-number-> %d and chunks->%d\n", current->index, current->chunks);
		current = current->next;
	}
}

void	still_number(t_stack **stack, t_stack **stack_b)
{
	int	len;

	len = lstsize(*stack);
	while (len > 0)
	{

		len = lstsize(*stack);
		// check_stack_b(stack, stack_b);
		push_b(stack, stack_b);
	}
	// if (len != 0)
	// 	check_stack_b(stack, stack_b);
}

void	while_stack_b(t_stack **stack, t_stack **stack_b)
{
	int	len;

	len = lstsize(*stack_b);
	while (len > 2)
	{
		len = lstsize(*stack_b);
		push_biger(stack, stack_b);
	}
	push_a(stack_b, stack);
	// printf("how much still in stack b %d\n", lstsize(*stack_b));
}

// void		sort_hundred(t_stack **stack, t_stack **stack_b, int i)
// {
	// t_stack	*index_list;
	// int		j;

	// j = 0;
	// put_index(stack, i);
	// while (j <= i)
	// {
	// 	reset_on(stack);
	// 	index_list = hold_number(stack, j, lstsize(*stack));
	// 	// if (index_list != NULL)
	// 	// 	printf("list %d\n", index_list->nb);
	// 	// up_or_down(stack, index_list);
	// check_stack_b(stack, stack_b);
	// 	if (index_list == NULL)
	// 		j++;
	// }
	// still_number(stack, stack_b);
	// while_stack_b(stack, stack_b);
// }

void	sort_hundred(t_stack **stack, t_stack **stack_b, int i)
{
	int	len;
	int	j;

	len = lstsize(*stack) / 2;
	j = 0;
	while (lstsize(*stack) > 0 && j < len)
	{
		big_number(stack, stack_b, i);
		check_stack_b(stack, stack_b);
		j++;
	}
	still_number(stack, stack_b);
	while_stack_b(stack, stack_b);

}
