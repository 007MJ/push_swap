/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   change_tail_list.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 19:40:19 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/09/20 19:44:37 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	change_tail_list(t_stack *stack, int data)
{
	t_stack *current;
	t_stack *new_list;

	current = stack;
	new_list->nb = data;
	while (current != NULL)
	{
		current = current->next;
	}
	current->next = new_list;
	new_list->next = NULL;
}
