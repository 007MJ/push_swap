/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_stack_b.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 11:42:31 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/10/26 18:15:53 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	check_stack_b(t_stack **stack, t_stack **stack_b)
{
	t_stack	*second;
	t_stack	*first;


	int	stop;

	stop = 0;
	if (is_followed(stack) == 1)
		return ;
	if (*stack_b == NULL)
	{
		printf("je suis dans null stack_b\n");
		push_b(stack, stack_b);
	}
	else
	{
		second = search_list(*stack_b, 1);
		first = search_list(*stack, 1);
		while (stop == 0)
		{
			second = search_list(*stack_b, 1);
			first = search_list(*stack, 1);
			if (first->nb > second->nb)
			{

				stop = 1;
				push_b(stack, stack_b);
			}
			else
			{
				printf("plus petit\n");
				printf("first->nb %d\n", first->nb);
				printf("second->nb %d\n", second->nb);
				printf("len of stack_b %d\n", lstsize(*stack_b));
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

