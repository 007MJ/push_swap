/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   section.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:59:36 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/09/06 19:18:27 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"



t_stack		*section(char *str, t_stack *save)
{
	// split
	// malloc le nombre de space
	// mettre en nombre
	int		i;
	int		j;
	int		nb;
	char	**tab;

	tab = ft_split(str, ' ');
	i = 0;
	j = 0;
	while (*tab != NULL)
	{
		i++;
		tab++;
	}
	while (i > j)
	{
		nb = malloc(sizeof(int));
		nb = (int)ft_atoi(tab[j]);
		nb = 112;
		if (j == 0)
		{
			save->nb = nb;
		}
		add_last(save, nb);
		j++;
	}
	return (save);
}
