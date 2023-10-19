/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hold_number.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:30:37 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/10/18 21:24:07 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_stack*	is_second(t_stack **stack, int chunk , int middle)
{
	t_stack	*current;
	t_stack	*lstmp;
	int		i;

	i = 1;
	current = *stack;
	printf("on est dans is_second\n");
	if (fund_chunks(stack, chunk, middle, 0) == 0)
	{
		printf("pas chunks is second est 0\n");
		return (NULL);
	}
	while (current != NULL && i > middle)
	{
		if (current->chunks == chunk)
			lstmp = current;
		current = current->next;
		i++;
	}
	i = 1;
	current = *stack;
	while (current != NULL && i > middle)
	{
		if (current->chunks == chunk && lstmp->nb > current->nb)
			lstmp = current;
		current = current->next;
		i++;
	}
	return (lstmp);
}

void on_see(t_stack **stack)
{
	t_stack *current;

	current = *stack;
	while (current != NULL)
	{
		if (current->chunks == 0)
			printf("current->index %d, current->chunks %d, current->nb %d\n", current->index, current->chunks, current->nb);
		current = current->next;
	}
}

int less_than_middle(t_stack **stack, int chunks, int len)
{
	t_stack	*first;

	first = is_first(stack, chunks, len / 2);
	if (first == NULL)
		return (-1);
	return (first_count_move(stack, first));
}

int	bigger_than_middle(t_stack **stack, int chunks, int len)
{
	t_stack	*second;

	second = is_second(stack, chunks, len / 2);
	if (second == NULL)
		return (-1);
	return (second_count_move(stack, second));
}

t_stack  *hold_number(t_stack **stack, int chunks, int len)
{
	int	first;
	int	second;

	first = less_than_middle(stack, chunks, len);
	second = bigger_than_middle(stack, chunks, len);
	printf("number of move of second %d\n", second);
	// if (first > second && first != -1 && second != -1)
	// 	up_or_down(stack, first, 1);
	// if (second < first && first != -1 && second != -1)
	// 	up_or_down(stack, second, 2);
	return (NULL);
}
