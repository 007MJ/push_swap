/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struc_infos.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:55:15 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/09/19 23:28:47 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	struc_infos(t_infos *info, int position, int position_one, char *str)
{
	info->position = position;
	info->position_one = position_one;
	info->str = str;
}
