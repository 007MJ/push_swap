/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   positive.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 16:43:34 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/11/12 16:51:20 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	ok_posi(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' && (str[i + 1] >= '0'
			&& str[i + 1] <= '9') && str[i] == '+')
		return (1);
	return (0);
}

int	positive(char *str)
{
	int	i;

	i = 0;
	if (ok_posi(str) == 1)
		i++;
	while (str[i])
	{
		if (str[i] == '+')
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
