/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 13:15:52 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/11/12 02:11:56 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_stack	*where_nb(t_stack **stack)
{
	int		tmp;
	t_stack	*tmp_list;
	t_stack	*current;

	current = *stack;
	if (stack != NULL)
	{
		tmp = current->nb;
		tmp_list = current;
		current = current->next;
	}
	while (current != NULL)
	{
		if (tmp > current->nb)
		{
			tmp = current->nb;
			tmp_list = current;
		}
		current = current->next;
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
void	get_up(t_stack **stack, t_stack *list)
{
	int	i;

	i = 1;
	if (stack != NULL && list != NULL && lstsize(*stack) > 2)
	{
		if (list->ra_rra == 1)
		{
			while (i < list->move)
			{
				// printf("on est la \n en haut ou en bas %d\n", list->ra_rra);
				rotate_a(stack, "ra\n");
				i++;
			}
		}
	}
}
void	small_number (t_stack **stack, t_stack **stack_b)
{
	t_stack	*small;

	small = where_nb(stack);
	small->ra_rra = 1;
	small->move = count(stack, small);
	// up_or_down(stack, small);
	get_up(stack, small);
	(void)stack_b;
}

