/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_stack_a.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 21:46:54 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/11/05 01:03:10 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	search_for_closer(int number, int smaller, int middle, int big)
{
	int	bgg;
	int	mdd;
	int	sml;

	bgg = big - number;
	if (bgg < 0)
		bgg *=-1;
	mdd = number - middle;
	if (mdd < 0)
		mdd *=-1;
	sml = number - smaller;
	if (sml < 0)
		sml *=-1;
	if (bgg < mdd && bgg < sml)
		return (3);
	else if (mdd < bgg && mdd < sml)
		return (2);
	else
		return (1);
}

t_stack	*which_place(t_stack **stack_b, int i)
{
	int		number;
	t_stack	*list;

	if (i > 0 && i < 4)
	{
		number = which_number(stack_b, i);
		return (list = search_list(*stack_b, number));
	}
	else
		return (NULL);
}

void	check_stack_a(t_stack **stack, t_stack **stack_b)
{
	// t_stack	*big;
	// t_stack	*middle;
	// t_stack	*smaller;

	// if (lstsize(*stack_b) > 3)
	// {
	// 	big = which_place(stack, 1);
	// 	middle = which_place(stack, 2);
	// 	smaller	= which_place(stack, 3);
	// 	if (search_for_closer((*stack_b)->nb, smaller->nb, middle->nb, big->nb) == 3)
	// 		place_number(big, stack_b, stack);
	// 	if (search_for_closer((*stack_b)->nb, smaller->nb, middle->nb, big->nb) == 2)
	// 		place_number(middle, stack_b, stack);
	// 	if (search_for_closer((*stack_b)->nb, smaller->nb, middle->nb, big->nb) == 1)
	// 		place_number(smaller, stack_b, stack);
	// }
	go_place_number(stack_b, stack);
}
