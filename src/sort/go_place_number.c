/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   go_place_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 23:20:36 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/11/05 19:20:56 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int		*where_place(t_stack **next_b, t_stack **stack)
{
	int	i;
	t_stack *curr;

	i = 0;
	curr = *stack;
	while (curr != NULL)
	{
		if ((*next_b)->nb > curr->nb)
			return (i);
		i++;
		curr = curr->next;
	}
	return (i);
}

void	find_move(int where, t_stack **stack, int lensize)
{

}

void	go_place_number(t_stack **next_b, t_stack **stack)
{
	t_stack *list;

	list = NULL;
	list = where_place(next_b, stack);
	// printf("closer to who %d\n", list->nb);

}
