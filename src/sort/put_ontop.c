/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_ontop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:02:53 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/11/04 15:47:01 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	put_ontop(int place_of_nb, t_stack **stack_b)
{
	int	i;

	i = 1;
	if (stack_b == NULL)
		return ;
	while (i <= place_of_nb)
	{
		reverse_rotate_a(stack_b, "rb\n");
		i++;
	}
}
