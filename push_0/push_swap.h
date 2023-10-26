/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:08:44 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/10/26 18:13:27 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>


typedef struct s_stack
{
	int				nb;
	int				index;
	int				chunks;
	int				on;
	int				move;
	int				ra_rra;
	struct	s_stack	*next;
}	t_stack;



# endif
