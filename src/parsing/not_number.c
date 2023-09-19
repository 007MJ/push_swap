/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   not_number.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 13:46:01 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/09/19 16:32:36 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	check_space(char *str)
{
	int	i;
	int	y;

	i = 0;
	y = 0;
	while (str[i] == ' ')
	{
		if (str[i] != ' ')
			y = -1;
		i++;
	}
	if (y != -1)
		return (-1);
	return (1);
}

int	not_numbe(char *str)
{
	int	i;

	i = 0;
	if (check_space(str) == -1)
		return (-1);
	while (str[i] && str[i] <= 9 && str[i] <= 13 || str[i] == 32)
		i++;
	// check si il des alph
	if (is_alpha(str) != 1)
	{
		printf("error : alpha");
		return (-1);
	}
	//check si c'est seulement nb and space and -
	if (is_number(str) != 1)
	{
		printf("error : number\n");
		return (-1);
	}
	// check le le -
	if (nb_ok(str) != 1)
	{
		printf("error : nb_ok");
		return (-1);
	}
	return (1);
}
