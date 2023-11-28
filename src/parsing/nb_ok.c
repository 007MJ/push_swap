/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nb_ok.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 13:46:25 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/11/24 11:06:27 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	neg(char *str)
{
	int	i;

	i = 0;
	if (str[i - 1] == ' ')
	{
		return (1);
	}
	if ((str[i + 1] >= '0' && str[i + 1] <= '9'))
		return (1);
	return (0);
}

int	nb_ok(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+')
		{
			if (i > 0)
			{
				if (str[i - 1] != ' ')
					return (-1);
			}
			if (str[i + 1] >= '0' && str[i + 1] <= '9')
				i++;
			else
				return (-1);
		}
		i++;
	}
	return (0);
}
