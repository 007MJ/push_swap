/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:31:31 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/09/19 18:52:33 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	swap_a_b(t_stack *lst, t_infos *infos)
{
	swap_list(lst, infos->position, infos->position_one);
	ft_putstr(infos->str);
}
