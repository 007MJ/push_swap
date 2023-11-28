/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 18:14:06 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/11/16 17:11:32 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_stack	*new_stack(void)
{
	t_stack	*new;

	new = malloc (sizeof(t_stack));
	if (new == NULL)
		return (NULL);
	new->nb = 0;
	new->on = 0;
	new->chunks = 0;
	new->index = 0;
	new->ra_rra = 0;
	new->next = NULL;
	return (new);
}
