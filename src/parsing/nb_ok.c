/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nb_ok.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 13:46:25 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/08/22 16:38:48 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	neg(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' && (str[i + 1] >= '0' && str[i + 1] <= '9'))
		return (1);
	return (0);
}

int nb_ok(char *str)
{
	int i;

	i = 0;
	if (neg(str) == 1)
		i++;
	while (str[i])
	{
		if (str[i] == '-')
		{
			if ((str[i + 1] >= '0' && str[i + 1] <= '9') && str[i - 1] == ' ')
			{
				i++;
			}
			else
				return (0);
		}
		i++;
	}
	return (1);
}
