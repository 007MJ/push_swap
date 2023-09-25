/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:53:17 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/09/24 19:09:41 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main (int argc, char *argv[])
{
	t_stack	*stack;
	t_stack	*stack_b;
	t_infos	*info;

	stack = malloc(sizeof(t_stack));
	stack_b = NULL;
	info = malloc(sizeof(t_infos));

	stack = argc_bigger_two(argv, argc);

	// first_be_last(&stack);
	rotate_a(&stack, "ra");
	printlst(stack);
	printlst(stack_b);
	// free(stack);
}
