/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_number.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 15:08:22 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/11/11 19:16:10 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_stack	*where_nb_stack(t_stack **stack, int bewteen)
{
	int		i;
	int		tmp;
	t_stack	*tmp_list;
	t_stack	*current;

	current = *stack;
	i = 1;
	if (stack != NULL)
	{
		tmp = current->nb;
		tmp_list = current;
		current = current->next;
		i++;
	}
	while (current != NULL && bewteen >= i)
	{
		if (tmp < current->nb && current->on != 1)
		{
			tmp = current->nb;
			tmp_list = current;
		}
		current = current->next;
		i++;
	}
	return (tmp_list);
}

int	count_in_stack(t_stack **stack, t_stack	*list)
{
	t_stack	*current;
	int		i;

	current = *stack;
	i = 1;
	while (current != NULL)
	{
		// printf("current->%d == list->%d\n",current->nb, list->nb);
		if (current->nb == list->nb)
			return (i);
		current = current->next;
		i++;
	}
	return (-1);
}

void	big_number(t_stack **stack, t_stack **stack_b, int bewteen)
{
	t_stack	*small;

	small = where_nb_stack(stack, bewteen);
	small->ra_rra = 1;
	small->move = count_in_stack(stack, small);
	up_or_down(stack, small);
	(void)stack_b;
}

