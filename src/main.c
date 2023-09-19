/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:53:17 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/09/19 19:52:45 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main (int argc, char *argv[])
{
	t_stack	*stack;
	t_infos	*info;

	stack = malloc(sizeof(t_stack));
	info = malloc(sizeof(t_infos));
	if (argc == 2)
	{
		if (not_numbe(argv[1]) == -1)
			return (-1);
		on_stack(argv[1], stack);
		printlst(stack);
		printf("size lst -> %d\n", lstsize(stack));
	}
	else if (argc > 2)
	{
		stack = argc_bigger_two(argv, argc);
		// swap_a(stack);
		// swap_list(stack, 3, 6);
		info->position = 1;
		info->position_one = 2;
		info->str = "sa\n";
		swap_a_b(stack, info);
		printlst(stack);
		printf("size lst -> %d\n", lstsize(stack));
	}
	else
		ft_putstr("Need 2 or more argc !\n");
	free(stack);
}
