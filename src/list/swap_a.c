/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:31:31 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/09/07 22:22:14 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	swap_a(t_stack *lst)
{
	t_stack	*second;
	int		first;

	if (lstsize(lst) != 1)
	{
		second = lst;
		second = second->next;
		first = lst->nb;
		lst->nb = second->nb;
		second->nb = first;
	}
}
