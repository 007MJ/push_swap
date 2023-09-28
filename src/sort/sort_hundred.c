/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_hundred.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 21:18:24 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/09/28 16:14:18 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	index_list(t_stack **stack)
{
	int		i;
	t_stack	*current;

	current = *stack;
	i = -1;
	while (current != NULL)
	{
		current->index = i;
		current = current->next;
	}
}

void	put_index(t_stack **stack)
{
	t_stack *current;
	t_stack *tmp;
	int		index;

	index = 1;
	while (index < lstsize(*stack) + 1)
	{
		tmp = search_list(*stack, index);
		// printf("next->number %d\n", tmp->nb);
		current = *stack;
		while (current != NULL)
		{
			if (current->index == -1)
			{
				if (tmp->nb < current->nb)
					tmp = current;
			}
			current = current->next;
		}
		tmp->index = index;
		index++;
	}
}
// int	is_less_move(int index, int middle)
// {
// 	// l'index va me dire il es ou par rapport a la moiter
// 	// si plus grand que le middle regarde le nombre de ++ pour aller ver le haut
// 	// si plus petit regarde le nombre de -- pour aller sur top
// }

// int	between_chunk(t_stack **stack, int chunk, int number)
// {
// 	// etre dans ces chunks
// 	// faire le moins de movement
// 	// etre le plus petit
// }
// // faire une function qui va regarde que nombre prend moins de mouvement
// int hold_number(t_stack **stack)
// {
// }
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


void		sort_hundred(t_stack **stack, t_stack **stack_b)
{
	put_index(stack);
	printindex(*stack);
}
