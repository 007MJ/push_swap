/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   up_or_down.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 21:13:32 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/11/24 20:02:11 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	check_ra_rra(t_stack **stack, t_stack *list)
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
			if (i > lstsize(*stack) / 2)
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

void	up_or_down(t_stack **stack, t_stack *list)
{
	int	i;

	i = 1;
	if (stack != NULL && list != NULL && lstsize(*stack) > 2)
	{
		if (check_ra_rra(stack, list) == 1)
		{
			while (i < list->move)
			{
				rotate_a(stack, "ra\n");
				i++;
			}
		}
		if (check_ra_rra(stack, list) == 2)
		{
			if (list->move == 1)
				list->move++;
			while (i < list->move)
			{
				reverse_rotate_a(stack, "rra\n");
				i++;
			}
		}
	}
}
