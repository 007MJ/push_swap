/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 21:18:24 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/10/20 01:42:24 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	small_list(t_stack **stack)
{
	t_stack *current;
	int		tmp;

	current = *stack;
	while (current != NULL)
	{
		if (current->on == 0 )
		{
			tmp = current->nb;
			break ;
		}
		current = current->next;
	}
	current = *stack;
	while (current != NULL)
	{
		if (current->on == 0 && tmp > current->nb && current->nb != tmp)
		{
			tmp = current->nb;
		}
		current = current->next;
	}
	return (tmp);
}

void	ticket_list(t_stack **stack, int i)
{
	t_stack	*current;
	int		small;

	current = *stack;
	small = small_list(stack);
	while (current != NULL)
	{
		if (current->nb == small)
		{
			current->on = 1;
			current->index = i;
		}
		current = current->next;
	}
}

// void	printindex(t_stack	*stack)
// {
// 	t_stack *current;

// 	current = stack;
// 	while (current != NULL)
// 	{
// 		printf("number-list ->%d and inde ->%d\n", current->nb, current->index);
// 		current = current->next;
// 	}
// }

t_stack	**put_index(t_stack **stack, int i)
{
	t_stack	*current;
	int		index;
	int		size;

	size = lstsize(*stack);
	index = 0;
	current = *stack;
	while (index <= size)
	{
		ticket_list(stack, index);
		index++;
	}
	chunks(stack , i);
	return (stack);
}


