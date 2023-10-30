/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_stack_b.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 11:42:31 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/10/30 19:20:22 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	check_stack_b(t_stack **stack, t_stack **stack_b, t_stack *list, int lenstack_b)
{
	t_stack	*second;
	t_stack	*first;


	int	stop;
	(void)list;
	stop = 0;
	if (*stack_b == NULL)
	{
		printf("je suis dans null stack_b\n");
		push_b(stack, stack_b);
	}
	else
	{
		second = search_list(*stack_b, 1);
		first = search_list(*stack, 1);
		while (stop == 0 && first != NULL && second != NULL)
		{
			first = search_list(*stack, 1);
			second = search_list(*stack_b, 1);
			if (first->nb > second->nb || lstsize(*stack_b) >= lenstack_b - 1)
			{
				stop = 1;
				// printf("Dans le first if len of stack_b %d\n", lstsize(*stack_b));
				push_b(stack, stack_b);
			}
			if (lstsize(*stack_b) < lenstack_b - 1)
			{
				if (first->nb < second->nb )
				{
				// printf("plus petit\n");
				// printf("first->nb %d\n", first->nb);
				// printf("second->nb %d\n", second->nb);
				// printf("len of stack_b %d\n", lstsize(*stack_b));
				if (lstsize(*stack_b) == 1 )
					push_b(stack, stack_b);
				if( is_bigger(first, stack_b) == 0)
					push_b(stack, stack_b);
				else
					rotate_a(stack_b, "rb\n");
				}
			}
		}
	}
}

// void beforepush(t_stack ** stack)
// {
// 	printf("--before we push--\n");
// 	t_stack  *curr;

// 	curr = *stack;
// 	if (curr != NULL)
// 	{
// 		for (int i = 0; i < 1; i++)
// 		{
// 			printf("number push %d\n", curr->nb);
// 			curr = curr->next;
// 		}
// 	}
// 	printf("--before we push end --\n");
// }

// void	check_stack_b(t_stack **stack, t_stack **stack_b, t_stack *list)
// {
// 		push_b(stack, stack_b);
// 		(void)list;
// 		// trouve une facon de travailler directement avec la liste retourne car les index ne function pas partout ;
// }

