/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_stack_b.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 11:42:31 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/11/10 03:03:02 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

// void	check_stack_b(t_stack **stack, t_stack **stack_b, t_stack *list, int lenstack_a)
// {
// 	t_stack	*second;
// 	t_stack	*first;


// 	int	stop;
// 	(void)list;
// 	stop = 0;
// 	if (*stack_b == NULL)
// 	{
// 		printf("je suis dans null stack_b\n");
// 		push_b(stack, stack_b);
// 	}
// 	else
// 	{
// 		second = search_list(*stack_b, 1);
// 		first = search_list(*stack, 1);
// 		while (stop == 0 && first != NULL && second != NULL)
// 		{
// 			first = search_list(*stack, 1);
// 			second = search_list(*stack_b, 1);
// 			if (first->nb > second->nb || lstsize(*stack_b) >= lenstack_a - 1)
// 			{
// 				printf("stop == 1 :first-> %d and second-> %d\n", first->nb, second->nb );
// 				stop = 1;
// 				push_b(stack, stack_b);
// 			}
// 			if (lstsize(*stack_b) < lenstack_a - 1 && stop != 1)
// 			{
// 				if (first->nb < second->nb )
// 				{
// 					if (lstsize(*stack_b) == 1)
// 						push_b(stack, stack_b);
// 					if( is_bigger(&first, stack_b) == 0)
// 						push_b(stack, stack_b);
// 					if(first->nb < second->nb )
// 					{
// 						printf("first-> %d and second-> %d\n", first->nb, second->nb );
// 						rotate_a(stack_b, "--rb\n");
// 					}
// 				}
// 			}
// 		}
// 	}
// }


// t_stack	*which_place(t_stack **stack_b, int i)
// {
// 	int		number;
// 	t_stack	*list;

// 	if (i > 0 && i < 4)
// 	{
// 		number = which_number(stack_b, i);
// 		return (list = search_list(*stack_b, number));
// 	}
// 	else
// 		return (NULL);
// }

// int	search_for_closer(int number, int smaller, int middle, int big)
// {
// 	int	bgg;
// 	int	mdd;
// 	int	sml;

// 	bgg = big - number;
// 	if (bgg < 0)
// 		bgg *=-1;
// 	mdd = number - middle;
// 	if (mdd < 0)
// 		mdd *=-1;
// 	sml = number - smaller;
// 	if (sml < 0)
// 		sml *=-1;
// 	if (bgg < mdd && bgg < sml)
// 		return (3);
// 	else if (mdd < bgg && mdd < sml)
// 		return (2);
// 	else
// 		return (1);
// }

// void	check_stack_b(t_stack **stack, t_stack **stack_b, t_stack *list, int lenstack_a)
// {
// 	t_stack	*big;
// 	t_stack	*middle;
// 	t_stack	*smaller;

// 	// big = NULL;
// 	// middle = NULL;
// 	// smaller = NULL;
// 	(void)lenstack_a;
// 	(void)list;
// 	if (stack_b == NULL || lstsize(*stack_b) < 3 || lstsize(*stack) <= 3)
// 		push_b(stack, stack_b);
// 	if (stack_b != NULL && lstsize(*stack) > 3)
// 	{
// 		smaller = which_place(stack_b, 1);
// 		middle = which_place(stack_b, 2);
// 		big = which_place(stack_b, 3);
// 		if (search_for_closer((*stack)->nb, smaller->nb, middle->nb, big->nb) == 1)
// 			place_number(smaller, stack, stack_b);
// 		if (search_for_closer((*stack)->nb, smaller->nb, middle->nb, big->nb) == 2)
// 			place_number(middle, stack, stack_b);
// 		if (search_for_closer((*stack)->nb, smaller->nb, middle->nb, big->nb) == 3)
// 			place_number(big, stack, stack_b);
// 	}
// }

void	check_stack_b(t_stack **stack, t_stack **stack_b)
{
	t_stack *list;


	if (stack_b == NULL)
		push_b(stack, stack_b);
	else
	{
		push_b(stack, stack_b);
		list = search_list(*stack_b, lstsize(*stack));
		if (list != NULL)
		{
			if ((*stack_b)->nb < list->nb)
			rotate_a(stack_b, "--rb\n");
		}
		if ((*stack_b)->nb > (*stack)->next->nb)
			swap_a_b(*stack_b, "sb\n");
	}
}
