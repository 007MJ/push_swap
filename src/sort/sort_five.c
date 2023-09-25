/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:18:04 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/09/25 19:36:14 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	sort_five(t_stack **stack, t_stack **stack_b)
{
	t_stack	*list;

	push_b(stack, stack_b);
	push_b(stack, stack_b);
	sort_three(stack);
	push_b(stack_b, stack);
	list = search_list(*stack, 2);
}
