/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:24:46 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/09/24 19:13:08 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	reverse_rotate_a(t_stack **stack, char *str)
{
	t_stack	*current;
	t_stack	*new;
	int		i;

	i = 1;
	ft_putstr("rra\n");
	new = new_stack();
	current = search_list(*stack, lstsize(*stack) -1);
	new = search_list(*stack, lstsize(*stack) -2);
	new->next = NULL;
	current->next = *stack;
	*stack = current;
}
