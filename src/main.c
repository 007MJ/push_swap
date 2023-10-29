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

	int i;

	i = 0;
	put_index(stack, 5);
	// let_see(stack);
	if(lstsize(*stack) == 3)
		sort_three(stack);
	if (lstsize(*stack) == 5)
		sort_five(stack, stack_b);
	if (lstsize(*stack) == 100)
	{
		while (i <= 5)
		{
			if (sort_hundred(stack, stack_b, i) == NULL)
				i++;
		}
	}
}

void	push_hundred(t_stack **stack, t_stack **stack_b)
{
	t_stack	*list;
	int		i;

	i = 0;
	// let_see(stack);
	put_index(stack, 5);
	reset_on(stack);
	while (i < 5)
	{
		reset_on(stack);
		list = hold_number(stack, i, 100);
		// if (list != NULL)
		// 	printf("small number %d and number of move %d and index %d\n", list->nb, list->move, list->index);
		up_or_down(stack, list);
		if (list != NULL)
			if (list->chunks == i)
				printf("--number %d in chunks %d\n", list->nb, list->chunks);
		check_stack_b(stack, stack_b, list);
		if (list == NULL)
			i++;
		
	}
	(void)stack_b;
}


int	main (int argc, char *argv[])
{
	t_stack	*stack;
	t_stack	*stack_b;

	stack_b = NULL;

	// trouve une facon de travailler directement avec la liste retourne car les index ne function pas partout 
	stack = argc_bigger_two(argv, argc);
	// push_swap(&stack, &stack_b);
	push_hundred(&stack, &stack_b);
	// printindex(stack);
	printf("stack A : \n");
	printlst(&stack);
	printf("stack B : \n");
	printlst(&stack_b);
}
