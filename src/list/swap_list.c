/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:08:13 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/09/20 17:28:37 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	swap_list(t_stack *stack, int position, int position_one)
{
	int		tm;
	t_stack	*list;
	t_stack	*list_one;

	list = search_list(stack, position);
	list_one = search_list(stack, position_one);
	printf("position in list-> %d, at postion (%d)\n", list->nb, position);
	printf("position in list-> %d, at postion (%d)\n", list_one->nb, position_one);
	tm = list->nb;
	list->nb = list_one->nb;
	list_one->nb = tm;
}
