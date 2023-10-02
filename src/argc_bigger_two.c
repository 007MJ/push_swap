/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argc_bigger_two.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:46:08 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/10/02 14:17:24 by mnshimiy         ###   ########.fr       */
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

t_stack		*argc_one(char **str, t_stack *save)
{
	int		i;
	int		nb;
	char	**tab;

	tab = str;
	i = 0;
	save->nb = ft_atoi(tab[i]);
	i++;
	while (tab[i])
	{
		add_last(save, ft_atoi(tab[i]));
		i++;
	}
	return (save);
}

char **joinargc(char *argv)
{
	char **strone;

	strone = ft_split(argv, ' ');
	return (strone);
}

t_stack	*argc_bigger_two(char **argv, int len_argc)
{
	t_stack	*stack;

	stack = new_stack();
	if (parsing_check(argv) == -1)
		return NULL;
	if (len_argc == 2)
	{
		return(argc_one(joinargc(argv[1]), stack));
	}
	return (add_on_stack(argv, stack));
}

