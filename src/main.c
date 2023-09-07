/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:53:17 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/09/07 01:10:21 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main (int argc, char *argv[])
{
	t_stack *stack;

	t_stack *current;
	stack = malloc(sizeof(t_stack));
	if (argc == 2)
	{
		if (not_numbe(argv[1]) == -1)
			return (-1);
		section(argv[1], stack);
		current = stack;
		while (current != NULL)
		{
			printf("%d\n", current->nb);
			current = current->next;
		}
	}
	else if (argc > 2)
	{

	}
	else
		ft_putstr("Need 2 or more argc !\n");
}
