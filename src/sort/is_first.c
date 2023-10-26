/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_first.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:15:24 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/10/26 18:15:51 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_stack		*is_first(t_stack **stack, int chunk)
{
	t_stack *current;
	t_stack	*lstmp;


	current = *stack;
	if (fund_chunks(stack, chunk) == 0)
		return (NULL);
	while (current != NULL)
	{
		if (current->chunks == chunk && current->on == 0)
		{
			lstmp = current;
			break ;
		}
		current = current->next;
	}
	current = *stack;
	while (current != NULL && lstmp != NULL)
	{
		if (current->chunks == chunk && lstmp->nb > current->nb && current->on == 0)
			lstmp = current;
		current = current->next;
	}
	return (lstmp);
}
