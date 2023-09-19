/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argc_bigger_two.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:46:08 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/09/19 15:56:05 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	parsing_check(char **argv)
{
	int	i;
	int	y;

	i = 1;
	y = 0;
	while (argv[i] != NULL)
	{
		if (not_numbe(argv[i]) == -1)
			return (-1);
		i++;
	}
	return (1);
}

int len_of_strone(char **argv)
{
	int	i;
	int	len;


	i = 1;
	len = 0;
	while (argv[i] != NULL)
	{
		len += ft_strlen(argv[i]);
		i++;
	}
	return (len);
}

char *joinargc(char **argv, int len_argc)
{
	int		i;
	int		y;
	int		len;
	char	*strone;


	strone = NULL;
	len = len_of_strone(argv);
	strone = malloc(sizeof(len) + 1 + len_argc);
	i = 1;
	y = 0;
	len = 0;
	while (argv[i] != NULL)
	{
		y = 0;
		while (argv[i][y] != '\0')
		{
			strone[len] = argv[i][y];
			len++;
			y++;
		}
		i++;
		strone[len] = ' ';
		len++;

	}
	strone[len] = '\0';
	return (strone);
}

t_stack	*argc_bigger_two(char **argv, int len_argc)
{
	t_stack	*stack;

	stack = new_stack();
	if (parsing_check(argv) == -1)
		return NULL;
	return (on_stack(joinargc(argv, len_argc), stack));
}

