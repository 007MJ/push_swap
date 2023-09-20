/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   change_head_list.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:21:25 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/09/20 19:46:58 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	change_head_list(t_stack *stack, int element, int position)
{
	t_stack *new_list;

	new_list = malloc(sizeof(t_stack));
	new_list->nb = element;
	new_list->next = stack;
	stack = new_list;
}
