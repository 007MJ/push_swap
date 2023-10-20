/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_first.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:15:24 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/10/19 20:38:02 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_stack		*is_first(t_stack **stack, int chunk)
{
	t_stack *current;
	t_stack	*lstmp;
	int		i;

	i = 1;
	current = *stack;
	if (fund_chunks(stack, chunk) == 0)
		return (NULL);
	while (current != NULL)
	{
		if (current->chunks == chunk)
		{
			lstmp = current;
			break ;
		}
		current = current->next;
		i++;
	}
	i = 1;
	current = *stack;
	while (current != NULL)
	{
		if (current->chunks == chunk && lstmp->nb > current->nb)
			lstmp = current;
		current = current->next;
		i++;
	}
	return (lstmp);
}
