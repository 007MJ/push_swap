/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:08:05 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/10/03 20:26:49 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

// 100 nombre par chunks 5 chunks


int	nb_per_chunks(int len, int nb_chunks)
{
	int	nb_per_chunks;
	int	nb_remaing;

	nb_per_chunks = len / nb_chunks;
	nb_remaing = len % nb_chunks;
	if (nb_remaing > 0)
		nb_per_chunks++;
	return (nb_per_chunks);
}

void	chunks(t_stack **stack, int nb)
{
	t_stack	*current;
	int		chunks_size = nb_per_chunks(lstsize(*stack), nb);
	current = *stack;
	put_index(stack);
	while (current != NULL)
	{
		current->chunks = (current->index / chunks_size);
		current = current->next;
	}
}
