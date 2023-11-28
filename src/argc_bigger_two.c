/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argc_bigger_two.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:46:08 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/11/24 18:49:22 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_str_array(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

int	parsing_check(char **argv)
{
	int	i;

	i = 1;
	while (argv[i] != NULL)
	{
		if (not_numbe(argv[i]) == -1)
			return (-1);
		i++;
	}
	return (1);
}

t_stack	*argc_one(char **str, t_stack *save)
{
	int		i;
	char	**tab;

	tab = str;
	i = 0;
	save->nb = ft_atoi(tab[i]);
	if (min_max(ft_atoi(tab[i])) != -1)
	{
		i++;
		while (tab[i])
		{
			if (min_max(ft_atoi(tab[i])) == -1)
				return (free_str_array(str), NULL);
			add_stack(save, ft_atoi(tab[i]));
			i++;
		}
	}
	else
		return (free_str_array(str), NULL);
	return (free_str_array(str), save);
}

//t_stack	*argc_one(char **str, t_stack *save)
// {
// 	int		i;
// 	char	**tab;

// 	tab = str;
// 	i = 0;
// 	save->nb = ft_atoi(tab[i]);
// 	if (min_max(ft_atoi(tab[i])) == -1)
// 	{
// 		free_str_array(str);
// 		return (NULL);
// 	}
// 	i++;
// 	while (tab[i])
// 	{
// 		if (min_max(ft_atoi(tab[i])) == -1)
// 		{
// 			free_str_array(str);
// 			return (NULL);
// 		}
// 		add_stack(save, ft_atoi(tab[i]));
// 		i++;
// 	}
// 	free_str_array(str);
// 	return (save);
// }

char	**joinargc(char *argv)
{
	char	**strone;

	strone = ft_split(argv, ' ');
	return (strone);
}

t_stack	*argc_bigger_two(char **argv, int len_argc)
{
	t_stack	*stack;
	t_stack	*tmp;

	stack = new_stack();
	if (parsing_check(argv) == -1)
	{
		free_stack(stack);
		return (NULL);
	}
	if (len_argc == 2)
	{
		tmp = argc_one(joinargc(argv[1]), stack);
		if (!tmp)
			free_stack(stack);
		stack = tmp;
		return (stack);
	}
	tmp = add_on_stack(argv, stack);
	if (!tmp)
		free_stack(stack);
	stack = tmp;
	return (stack);
}
