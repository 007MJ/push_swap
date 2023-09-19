/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struc_infos.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:55:15 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/09/19 19:50:13 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_infos	*struc_infos(t_infos *info, int position, int position_one, char *str)
{

	info->position = position;
	info->position_one = position;
	info->str = str;
	return (info);
}
