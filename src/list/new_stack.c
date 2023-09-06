/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 18:14:06 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/09/06 17:34:22 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_stack	*new_stack(int nb)
{
	t_stack	*new;
	new = malloc (sizeof(t_stack));
	new->nb = nb;
	new->next = NULL;
	return (new);
}
