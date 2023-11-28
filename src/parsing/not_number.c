/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   not_number.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 13:46:01 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/11/23 20:38:53 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	check_space(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ')
		i++;
	if (ft_strlen(str) == i)
		return (-1);
	return (0);
}

int	not_numbe(char *str)
{
	if (check_space(str) == -1)
	{
		ft_putstr("Error\n");
		return (-1);
	}
	if (is_alpha(str) != 1)
	{
		ft_putstr("Error\n");
		return (-1);
	}
	if (is_number(str) != 1)
	{
		ft_putstr("Error\n");
		return (-1);
	}
	if (nb_ok(str) == -1)
	{
		ft_putstr("Error\n");
		return (-1);
	}
	return (1);
}
