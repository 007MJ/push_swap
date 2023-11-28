/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_max.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:32:45 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/11/17 12:27:28 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

long int	min_max(long int mx)
{
	if (mx > 2147483647)
	{
		ft_putstr("Error\n");
		return (-1);
	}
	if (mx <= -2147483648)
	{
		ft_putstr("Error\n");
		return (-1);
	}
	return (1);
}
