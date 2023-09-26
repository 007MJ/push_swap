/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printlst.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:09:44 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/09/21 11:35:06 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	printlst(t_stack	*stack)
{
	t_stack *current;

	current = stack;
	while (current != NULL)
	{
		printf("%d\n", current->nb);
		current = current->next;
	}
}