/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:18:04 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/09/27 21:13:52 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	sort_number(t_stack **stack)
{
	t_stack	*list;
	t_stack	*second;
	t_stack	*three;

	second = search_list(*stack, 2);
	three = search_list(*stack, 3);
	list = search_list(*stack, lstsize(*stack));
	if ((*stack)->nb > list->nb)
		rotate_a(stack, "ra\n");
	if ((*stack)->nb > second->nb && (*stack)->nb < list->nb && (*stack)->nb < three->nb)
		swap_a_b(*stack, "sa\n");
}

void	sort_five(t_stack **stack, t_stack **stack_b)
{

	push_b(stack, stack_b);
	push_b(stack, stack_b);
	sort_three(stack);
	push_b(stack_b, stack);
	sort_number(stack);
	push_b(stack_b, stack);
	sort_number(stack);
}
