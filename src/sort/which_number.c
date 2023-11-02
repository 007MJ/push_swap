/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   which_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:43:34 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/11/02 04:12:17 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	big(t_stack **stack_b)
{
	int	tmp;
	int	i;
	t_stack	*curr;

	i = 1;
	curr = *stack_b;
	tmp = 0;
	while (curr != NULL)
	{
		if (curr->nb > tmp)
			tmp = curr->nb;
		curr = curr->next;
	}
	curr = *stack_b;
	while (curr != NULL)
	{
		if (curr->nb == tmp)
			return (i);
		curr = curr->next;
		i++;
	}
	return (-1);
}

int	is_closer_middle(int middle , t_stack **stack)
{
	t_stack	*curr;
	t_stack	*list;
	int		tmp;
	int		i;
	int		nb;

	tmp = 90;
	curr = *stack;
	while (curr != NULL)
	{
		nb = middle - curr->nb;
		if (tmp > nb && nb > -1)
		{
			tmp = nb;
			list = curr;
		}
		curr = curr->next;
	}
	curr = *stack;
	i = 1;
	while (curr != NULL)
	{
		if (list->nb == curr->nb)
			return (i);
		i++;
		curr = curr->next;
	}
	return (-1);
}

int	middle(t_stack **stack_b)
{
	t_stack	*curr;
	int		middle;
	int		divide;

	divide = 1;
	middle = 1;
	curr = *stack_b;
	while (curr != NULL)
	{
		middle += curr->nb;
		divide++;
		curr = curr->next;
	}
	middle = middle / divide;
	if (middle % 2 != 0)
		middle++;
	printf("middle %d\n", middle);
	return (is_closer_middle(middle, stack_b));
}

int	smaller(t_stack **stack)
{
	printf("-----\n");
	int	tmp;
	int	i;
	t_stack	*curr;

	i = 1;
	curr = *stack;
	tmp = 90;
	while (curr != NULL)
	{
		if (curr->nb < tmp)
			tmp = curr->nb;
		curr = curr->next;
	}
	curr = *stack;
	while (curr != NULL)
	{
		if (curr->nb == tmp)
			return (i);
		curr = curr->next;
		i++;
	}
	printf("---In the function ONE smaller %d\n", tmp);
	return (-1);
}

int which_number(t_stack **stack_b, int i)
{
	if (i == 3)
		return ( big(stack_b));
	else if (i == 2)
		return (middle(stack_b));
	else if (i == 1)
		return (smaller(stack_b));
	return (-1);
}
