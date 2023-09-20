/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a_b_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 23:32:13 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/09/20 17:14:48 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	swap_a_b_stack(t_stack *stack_a, t_stack *stack_b, t_infos *info)
{
	if (!stack_a || !stack_b)
		return ;
	swap_a_b(stack_a, info);
	swap_a_b(stack_b, info);
}
