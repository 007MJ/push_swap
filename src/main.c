/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:53:17 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/11/25 12:31:04 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_hundred(t_stack **stack, t_stack **stack_b)
{
	int	dup;

	dup = 0;
	dup = duplicate(stack);
	if (dup == 0)
	{
		if (is_sort(stack) == -1)
		{
			reset_on(stack);
			if (lstsize(*stack) <= 5)
				sort_five(stack, stack_b);
			if (lstsize(*stack) >= 6 && lstsize(*stack) < 200)
				sort_hundred(stack, stack_b, 10);
			if (lstsize(*stack) >= 200)
				five_hundred(stack, stack_b, 45);
		}
	}
	else
		ft_putstr("Error\n");
}

int	main(int argc, char *argv[])
{
	t_stack	*stack;
	t_stack	*stack_b;

	stack_b = NULL;
	stack = NULL;
	if (argv[1] != NULL)
	{
		stack = argc_bigger_two(argv, argc);
		if (!stack)
		{
			free_stack(stack_b);
			return (1);
		}
		push_hundred(&stack, &stack_b);
		printlst(&stack);
		free_stack(stack);
		free_stack(stack_b);
	}
	return (0);
}
