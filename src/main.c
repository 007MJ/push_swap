/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:53:17 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/10/26 17:53:42 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	printchunks(t_stack **stack)
{
	t_stack *current;
	current = *stack;
	while (current != NULL)
	{
		printf("number -> %d chunks-> {%d} \n", current->nb , current->chunks);
		current = current->next;
	}
}

void	printindex(t_stack	*stack)
{
	t_stack *current;

	current = stack;
	while (current != NULL)
	{
		printf("number-list ->%d and index ->%d\n", current->nb, current->index);
		current = current->next;
	}
}

void let_see(t_stack **stack)
{
	t_stack *current;

	current = *stack;
	while (current != NULL)
	{
		printf("index-number-> %d and chunks->%d\n", current->index, current->chunks);
		current = current->next;
	}
}

void	push_swap(t_stack **stack, t_stack **stack_b)
{
	int	i;
	int	len;

	i = 0;
	t_stack *s;

	s = NULL;
	len = lstsize(*stack);
	put_index(stack, 5);
	reset_on(stack);
	if(lstsize(*stack) == 3)
		sort_three(stack);
	if (lstsize(*stack) == 5)
		sort_five(stack, stack_b);
	if (lstsize(*stack) == 100)
		 sort_hundred(stack, stack_b, 5);


}


int	main (int argc, char *argv[])
{
	t_stack	*stack;
	t_stack	*stack_b;

	stack_b = NULL;
	stack = argc_bigger_two(argv, argc);
	push_swap(&stack, &stack_b);
	// printindex(stack);
	// printf("stack A : \n");
	// printlst(&stack);
	// printf("stack B : \n");
	// printlst(&stack_b);
}
