/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_hundred.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 21:18:24 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/09/27 21:50:57 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	index_list(t_stack **stack)
{
	int		i;
	t_stack	*current;

	current = *stack;
	i = 0;
	while (current != NULL)
	{
		current->index = i;
		current = current->next;
		i++;
	}
}

// faire une function qui va regarde que nombre prend moins de mouvement
int hold_number(t_stack **stack)

void		sort_hundred(t_stack **stack, t_stack **stack_b)
{

}
