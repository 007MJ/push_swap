/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 20:07:46 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/11/23 18:44:43 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	rotate_a(t_stack **stack, char *str)
{
	int		nb;
	int		index;

	ft_putstr(str);
	nb = (*stack)->nb;
	index = (*stack)->index;
	delete_first(stack);
	add_last(*stack, nb, index);
}
