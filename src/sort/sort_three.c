/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:37:12 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/11/23 20:34:10 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	sort_three(t_stack **stack)
{
	t_stack	*one;
	t_stack	*two;
	t_stack	*three;

	one = search_list(*stack, 1);
	two = search_list(*stack, 2);
	three = search_list(*stack, 3);
	if (one->nb > two->nb && two->nb < three->nb && three->nb > one->nb)
		swap_a_b(*stack, "sa\n");
	if (one->nb > two->nb && one->nb > three->nb && two->nb > three->nb)
		swap_a_b(*stack, "sa\n");
	if (two->nb > one->nb && two->nb > three->nb && one->nb > three->nb)
		reverse_rotate_a(stack, "rra\n");
	if (one->nb > two->nb && one->nb > three->nb && three->nb > two->nb)
		rotate_a(stack, "ra\n");
	else
	{
		if (one->nb < two->nb && one->nb < three->nb && two->nb > three->nb)
		{
			swap_a_b(*stack, "sa\n");
			if (one->nb > two->nb && one->nb > three->nb && two->nb < three->nb)
				rotate_a(stack, "ra\n");
		}
	}
}
