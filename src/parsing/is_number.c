/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_number.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:25:58 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/08/22 13:24:09 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int is_number(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= '0' && str[i] <= '9') || str[i] == ' ' || str[i] == '-')
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}
