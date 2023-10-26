/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reset_on.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 01:50:26 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/10/26 17:45:41 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	reset_on(t_stack **stack)
{
	t_stack	*current;

	current = *stack;
	while (current != NULL)
	{
		current->on = 0;
		current = current->next;
	}
}
