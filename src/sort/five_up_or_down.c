/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_up_or_down.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 19:56:14 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/11/24 20:36:54 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	five_check_ra_rra(t_stack **stack, t_stack *list)
{
	t_stack	*current;
	int		i;

	i = 1;
	current = NULL;
	current = *stack;
	while (current != NULL && list != NULL)
	{
		if (current->nb == list->nb)
		{
			if (i > 3)
				return (2);
			else
				return (1);
			break ;
		}
		i++;
		current = current->next;
	}
	return (-1);
}

void	five_up_or_down(t_stack **stack, t_stack *list)
{
	t_stack	*tmp;

	tmp = *stack;
	if (stack != NULL && list != NULL && lstsize(*stack) > 2)
	{
		if (five_check_ra_rra(stack, list) == 1)
		{
			while (list->nb != tmp->nb)
			{
				rotate_a(stack, "ra\n");
				tmp = *stack;
			}
		}
		if (five_check_ra_rra(stack, list) == 2)
		{
			while (list->nb != tmp->nb)
			{
				reverse_rotate_a(stack, "rra\n");
				tmp = *stack;
			}
		}
	}
}
