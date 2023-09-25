/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:24:46 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/09/25 17:03:17 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	reverse_rotate_a(t_stack **stack, char *str)
{
	t_stack *last;
	t_stack *before_last;
	ft_putstr(str);
	last = search_list(*stack, lstsize(*stack));
	before_last = search_list(*stack, lstsize(*stack) -1);
	before_last->next = NULL;
	last->next = *stack;
	*stack = last;
}
