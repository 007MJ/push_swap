/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:53:17 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/10/07 12:05:11 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_swap(t_stack **stack, t_stack **stack_b)
{
	// if(lstsize(*stack) == 3)
	// 	sort_three(stack);
	// if (lstsize(*stack) == 5)
	// 	sort_five(stack, stack_b);
	// if (lstsize(*stack) == 100)
		sort_hundred(stack, stack_b);

}

int	main (int argc, char *argv[])
{
	t_stack	*stack;
	t_stack	*stack_b;

	stack_b = malloc(sizeof(t_stack));
	stack_b = argc_bigger_two(argv, argc);
	push_swap(&stack, &stack_b);
	// printf("stack A : \n");
	// printlst(stack);
// 	printf("|-----------|\n");
	printf("stack B : \n");
	printlst(stack_b);
}
