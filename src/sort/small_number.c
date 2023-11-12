/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 13:15:52 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/11/11 15:26:06 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_stack	*where_nb(t_stack **stack, int bewteen)
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
		if (tmp > current->nb)
		{
			tmp = current->nb;
			tmp_list = current;
		}
		current = current->next;
		i++;
	}
	return (tmp_list);
}

int	count(t_stack **stack, t_stack	*list)
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

void	small_number (t_stack **stack, t_stack **stack_b, int bewteen)
{
	t_stack	*small;

	small = where_nb(stack, bewteen);
	small->ra_rra = 1;
	small->move = count(stack, small);
	up_or_down(stack, small);
	(void)stack_b;
}

