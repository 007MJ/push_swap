/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_on_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:59:36 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/11/27 13:11:35 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	more_one_av(char **str)
{
	int	i;
	int	j;

	j = 0;
	i = 1;
	while (str[i] != NULL)
	{
		while (str[i][j] != '\0')
		{
			if (str[i][j] == ' ')
				return (-1);
			j++;
		}
		j = 0;
		i++;
	}
	return (i);
}

t_stack	*add_on_stack(char **str, t_stack *save)
{
	int		i;
	char	**tab;

	tab = str + 1;
	i = 0;
	if (more_one_av(str) == -1)
	{
		ft_putstr("Error\n");
		return (NULL);
	}
	save->nb = ft_atoi(tab[i]);
	if (min_max(ft_atoi(tab[i])) == -1)
		return (NULL);
	i++;
	while (tab[i])
	{
		if (min_max(ft_atoi(tab[i])) == -1)
			return (NULL);
		add_stack(save, ft_atoi(tab[i]));
		i++;
	}
	return (save);
}
