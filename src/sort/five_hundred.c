/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_hundred.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 15:07:09 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/11/11 23:12:57 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	while_stack_b_f(t_stack **stack, t_stack **stack_b)
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
void	still_numbe_f(t_stack **stack, t_stack **stack_b)
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

// void	five_hundred(t_stack **stack, t_stack **stack_b, int i)
// {
// 	int	len;
// 	int	j;

// 	len = lstsize(*stack) / 2;
// 	j = 0;
// 	while (lstsize(*stack) > 0)
// 	{
		// big_number(stack, stack_b, i);
// 		check_stack_b(stack, stack_b);
// 		j++;
// 	}
// 	still_numbe_f(stack, stack_b);
// 	while_stack_b_f(stack, stack_b);

// }

// void	reset_on(t_stack **stack)
// {
// 	t_stack	*current;

// 	current = *stack;
// 	while (current != NULL)
// 	{
// 		current->on = 0;
// 		current = current->next;
// 	}
// }

int	is_chunks_in_stack(t_stack **stack, int start)
{
	t_stack	*current;
	int		i;

	i = 0;
	current = *stack;
	while (current != NULL)
	{
		if (current->nb >= start)
			i++;
		current = current->next;
	}
	if (i > 0)
		return (i);
	return (-1);
}
void	five_hundred(t_stack **stack, t_stack **stack_b, int i)
{
	(void)i;
	put_index(stack, 0);
	int	start;
	// t_stack	*list;
	// while (lstsize(*stack) > 0)
	// {
	// 	reset_on(stack);
	// 	big_number(stack, stack_b, i);
	// 	check_stack_b(stack, stack_b);
	// }
	(void)stack_b;
	start = lstsize(*stack) - 50;
	// while (lstsize(*stack))
	// {
	// 	if (is_chunks_in_stack(stack, start, i) == -1)
	// 	{
	// 		start += i;
	// 		i += i;
	// 	}
	// }
	// list = ;
	// printf("list %d\n", list->nb);
	while (lstsize(*stack) > 0)
	{
		up_or_down(stack, hold_number(stack, i, start));
		check_stack_b(stack, stack_b);
		if (is_chunks_in_stack(stack, start) == -1)
			start -= 50;
	}
	while_stack_b_f(stack, stack_b);
}
