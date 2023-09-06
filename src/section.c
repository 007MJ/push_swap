/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   section.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:59:36 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/09/05 20:20:54 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	section(char *str)
{
	// split
	// malloc le nombre de space
	// mettre en nombre
	int		i;
	char	**tab;

	tab = ft_split(str, ' ');
	i = 0;
	while (*tab != NULL)
	{
		i++;
		tab++;
	}
}
