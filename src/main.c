/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:53:17 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/09/05 18:30:55 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main (int argc, char *argv[])
{
	if (argc == 2)
	{
		if (not_numbe(argv[1]) == -1)
			return (-1);
		// ft_atoi(argv[1]);
		
	}
	else if (argc > 2)
	{

	}
	else
		ft_putstr("Need 2 or more argc !\n");
}
