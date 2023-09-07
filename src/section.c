/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   section.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:59:36 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/09/07 01:06:32 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"


t_stack		*section(char *str, t_stack *save)
{
	// split
	// malloc le nombre de space
	// mettre en nombre
	int		i;
	int		nb;
	char	**tab;

	tab = ft_split(str, ' ');
	i = 0;
	while (tab[i] != NULL)
	{
		if (i == 0)
		{
			save->nb = ft_atoi(tab[i]);
			i++;
		}
		add_last(save, ft_atoi(tab[i]));
		i++;
	}
	return (save);
}
