/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:53:17 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/11/11 23:15:50 by mnshimiy         ###   ########.fr       */
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

// void	push_swap(t_stack **stack, t_stack **stack_b)
// {

// 	int i;

// 	i = 0;
// 	put_index(stack, 5);
// 	// let_see(stack);
// 	if(lstsize(*stack) == 3)
// 		sort_three(stack);
// 	if (lstsize(*stack) == 5)
// 		sort_five(stack, stack_b);
// 	if (lstsize(*stack) == 100)
// 	{
// 		while (i <= 5)
// 		{
			// if (sort_hundred(stack, stack_b, i) == NULL)
// 				i++;
// 		}
// 	}
// }

void	see_list_afert_push(t_stack **stack)
{
	printf("--still in stack a ---\n");
	t_stack *cur;

	cur = *stack;
	if (stack == NULL || lstsize(*stack) < 3)
		return ;
	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", cur->nb);
		cur = cur->next;
	}
	printf("--still in stack a end ---\n");
}

void	push_hundred(t_stack **stack, t_stack **stack_b)
{
	if (lstsize(*stack) >= 100 && lstsize(*stack) < 500)
		sort_hundred(stack, stack_b, 10);
	if (lstsize(*stack)>= 500)
		five_hundred(stack, stack_b, 45);
}

void	push_number(t_stack **stack, t_stack **stack_b)
{
	int	len;
	int	len_b;

	len = lstsize(*stack);
	while (len > 3)
	{
		push_b(stack, stack_b);
		len = lstsize(*stack);
	}
	sort_three(stack);
	len_b = lstsize(*stack_b);
	while (len_b > 1)
	{
		len_b = lstsize(*stack_b);
		// check_stack_a(stack, stack_b);
		go_place_number(stack, stack_b);
	}
}

int	main (int argc, char *argv[])
{
	t_stack	*stack;
	t_stack	*stack_b;

	stack_b = NULL;

	// trouve une facon de travailler directement avec la liste retourne car les index ne function pas partout
	stack = argc_bigger_two(argv, argc);
	push_hundred(&stack, &stack_b);
	// push_number(&stack, &stack_b);
	// printindex(stack);
	// printf("stack A : \n");
	// printlst(&stack);
	// printf("stack B : \n");
	// printlst(&stack_b);
	// printf("size of stack b %d\n", lstsize(stack_b));
}
