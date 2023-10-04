/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_hundred.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 21:18:24 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/10/03 20:16:13 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	printchunks(t_stack **stack)
{
	t_stack *current;

	current = *stack;
	while (current != NULL)
	{
		// printf("chunks-> {%d}", current->chunks);
		current = current->next;
	}
}


void		sort_hundred(t_stack **stack, t_stack **stack_b)
{

	chunks(stack, 5);
	//faire foncionne la function hold
	hold_number(stack, 1, 6);
	put_index(stack);
}
