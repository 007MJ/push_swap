/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 21:18:24 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/10/02 11:26:36 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	less_list(t_stack **stack)
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

void	is_nb_list(t_stack **stack, int i)
{
	t_stack	*current;

	current = *stack;
	while (current != NULL)
	{
		if (current->nb == less_list(stack))
		{
			current->on = 1;
			current->index = i;
			break;
		}
		current = current->next;
	}
}

void	printindex(t_stack	*stack)
{
	t_stack *current;

	current = stack;
	while (current != NULL)
	{
		printf("list nb %d | index [%d]\n", current->nb , current->index);
		current = current->next;
	}
}

void put_index(t_stack **stack)
{
	t_stack	*current;
	int		index;

	index = 1;
	current = *stack;
	while (current != NULL)
	{
		is_nb_list(stack, index);
		current = current->next;
		index++;
	}
	// printindex(*stack);
}


