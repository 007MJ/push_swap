/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 19:18:10 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/09/24 19:20:11 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void rrr(t_stack **first, t_stack **second)
{
	reverse_rotate_a(first, "rrr");
	reverse_rotate_a(second, "");
}
