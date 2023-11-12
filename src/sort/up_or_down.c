/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   up_or_down.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 21:13:32 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/11/12 01:42:38 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	check_ra_rra(t_stack **stack, t_stack *list)
{
	int	i;

	i = 1;
	t_stack	*current;

	current = *stack;
	while (current != NULL && list != NULL)
	{
		if (current->nb == list->nb)
		{
			if (i > lstsize(*stack) / 2)
				return (2);
			else
				return (1);
			break;
		}
		i++;
		current = current->next;
	}
	return (-1);
}
void	up_or_down(t_stack **stack, t_stack *list)
{
	int	i;
	int	where;

	i = 1;
	where = check_ra_rra(stack, list);
	// printf("where %d\n" , where);
	// printf("the list number %d much move %d and where up or down %d\n", list->nb, list->move, where);
	if (stack != NULL && list != NULL && lstsize(*stack) > 2)
	{
		if (where == 1)
		{
			while (i < list->move)
			{
				// printf("on est la \n en haut ou en bas %d\n", list->ra_rra);
				rotate_a(stack, "ra\n");
				i++;
			}
		}
		if (where == 2)
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
