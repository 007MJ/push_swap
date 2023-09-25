/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 20:07:46 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/09/24 19:08:16 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	rotate_a(t_stack **stack, char *str)
{
	ft_putstr(str);
	t_stack	*new;
	int		nb;

	nb = (*stack)->nb;
	new = malloc(sizeof(t_stack));
	if (!new)
		return ;
	delete_first(stack);
	add_last(*stack, nb);
}
