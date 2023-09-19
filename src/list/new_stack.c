/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 18:14:06 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/09/19 16:50:53 by mnshimiy         ###   ########.fr       */
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
	new->next = NULL;
	return (new);
}
