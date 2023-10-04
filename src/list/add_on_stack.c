/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_on_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:59:36 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/10/03 20:26:17 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"


t_stack		*add_on_stack(char **str, t_stack *save)
{
	int		i;
	int		nb;
	char	**tab;

	tab = str + 1;
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
