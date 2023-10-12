/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 21:18:24 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/10/11 21:01:08 by mnshimiy         ###   ########.fr       */
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
	printf("small %d\n", tmp);
	return (tmp);
}

void	is_nb_list(t_stack **stack, int i)
{
	t_stack	*current;
	int		less;

	current = *stack;
	while (current != NULL)
	{
		less =  less_list(stack);
		if (current->nb == less)
		{
			printf("less_list->%d\n",  less);
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
		current = current->next;
		// printf("current->nb %d\ncurrent->index %d\n",current->nb, current->index);
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
	printindex(*stack);
}


