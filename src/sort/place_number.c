/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 21:06:36 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/11/05 01:04:35 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	where_is_nb(t_stack *closer_nb, t_stack **stack_b)
{
	int		i;
	t_stack	*curr;

	curr = *stack_b;
	i = 1;
	while (curr != NULL && closer_nb != NULL)
	{
		if (closer_nb->nb == curr->nb)
			return (i);
		i++;
		curr = curr->next;

	}
	return (-1);
}

void	is_swap(t_stack **stack)
{
	int	nb;
	int	nb_two;
	if (stack == NULL)
		return ;
	nb = (*stack)->nb;
	nb_two = (*stack)->next->nb;
	if (nb < nb_two)
		swap_a_b(*stack, "sb\n");
}

// void	which_move(int len, int place_of_nb, t_stack **next_b, t_stack **stack_b)
// {
// 	(void)next_b;
// 	(void)stack_b;
// 	(void)len;
// 	printf("place_of_nb -> %d\n", place_of_nb);
// 	printf("next_b -> %d len stack_b %d\n", (*next_b)->nb, lstsize(*stack_b));
// 	printlst(stack_b);
// 	if (place_of_nb < len / 2)
// 	{
// 		push_b(next_b, stack_b);
// 		push_a(next_b, stack_b);
// 		is_swap(stack_b);
// 	}
// 	if (place_of_nb == len / 2)
// 	{
// 		put_ontop(place_of_nb, stack_b);
// 		// push_b(next_b, stack_b);
// 		push_a(next_b, stack_b);
// 		// is_swap(stack_b);
// 	}
// 	if (place_of_nb > len / 2)
// 	{
// 		push_a(next_b, stack_b);
// 		reverse_rotate_a(stack_b, "ra\n");
// 		// is_swap(stack_b);
// 	}
// }

void	which_move(int len, int place_of_nb, t_stack **next_b, t_stack **stack_b)
{
	if (len == place_of_nb)
	{
		push_a(next_b, stack_b);
		is_swap(stack_b);
	}
	if (place_of_nb > len / 2)
	{
		put_ontop(place_of_nb, stack_b);
		push_a(next_b, stack_b);
	}
}

void	place_number(t_stack *closer_nb, t_stack **next_nb, t_stack **stack_b)
{
	int	len;
	int	place_of_nb;

	len = lstsize(*stack_b);
	place_of_nb = where_is_nb(closer_nb, stack_b);
	which_move(len, place_of_nb, next_nb, stack_b);
}
