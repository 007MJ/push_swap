/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hold_number.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:30:37 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/10/03 20:50:28 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

// trouve le plus petit nombre qui fais parti d'un chunks
// ensuite regard si son index et plus grands ou plus petit faire un comparaison avec les autre nombre
t_stack*	is_first(t_stack **stack, int chunk , int middle)
{
	t_stack *current;
	t_stack	*lstmp;
	int		i;

	i = 1;
	current = *stack;
	while (current != NULL && i <= middle)
	{
		if (current->chunks == chunk)
			lstmp = current;
		current = current->next;
		i++;
	}
	i = 1;
	current = *stack;
	while (current != NULL && i <= middle)
	{
		if (current->chunks == chunk && lstmp->nb > current->nb)
			lstmp = current;
		current = current->next;
		i++;
	}
	return (lstmp);
}

t_stack*	is_second(t_stack **stack, int chunk , int middle)
{
	t_stack *current;
	t_stack	*lstmp;
	int		i;

	i = 1;
	current = *stack;
	while (current != NULL && i < middle)
	{
		current = current->next;
		i++;
	}

	while (current != NULL)
	{
		if (current->chunks == chunk && i > middle)
			lstmp = current;
		current = current->next;
		i++;
	}
	i = i;
	current = *stack;
	while (current != NULL)
	{
		if (current->chunks == chunk && lstmp->nb > current->nb && i > middle)
			lstmp = current;
		current = current->next;
		i++;
	}
	return (lstmp);
}

int count_move(t_stack **stack, t_stack *list)
{
	int i;
	t_stack *current;

	current = *stack;
	i = 1;
	while (current != NULL)
	{
		if (list->index == current->index)
			return (i);
		current = current->next;
		i++;
	}
	return (i);
}

int hold_number(t_stack **stack, int chunks, int middle)
{
	t_stack *first;
	t_stack *second;

	// first = is_first(stack, chunks, middle);
	// 	printf("first -> %d\n", first->nb);
	second = is_second(stack, chunks, middle);
	printf("second -> %d\n", second->nb);
	// if (count_move(stack, first) - 50 > count_move(stack, second) - 100)
	// 	return(1);
	return (1);
}
