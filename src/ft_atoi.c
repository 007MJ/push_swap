/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 01:05:22 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/09/06 18:38:42 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	min_max(long mx)
{
	if (mx >= 2147483648 || mx <= -2147483648)
	{
		ft_putstr("Error : Integer Limits");
		return (-1);
	}
	return (1);
}

long int ft_atoi(char *str)
{
	int i;
	int	n;
	long int res;

	i = 0;
	n = 1;
	res = 0;
	while (str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		n = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	res *=n;
	if (min_max(res) == -1)
	{
		return (2147483647);
	}
	return (res);
}
