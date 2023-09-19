/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:53:17 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/09/19 16:10:26 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main (int argc, char *argv[])
{
	t_stack *stack;
	stack = malloc(sizeof(t_stack));
	if (argc == 2)
	{
		if (not_numbe(argv[1]) == -1)
			return (-1);
		on_stack(argv[1], stack);
		swap_a(stack);
		printlst(stack);
		printf("size lst -> %d\n", lstsize(stack));
	}
	else if (argc > 2)
	{
		stack = argc_bigger_two(argv, argc);
		printlst(stack);
	}
	else
		ft_putstr("Need 2 or more argc !\n");
	free(stack);
}
