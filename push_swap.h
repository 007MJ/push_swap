/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 14:50:30 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/09/05 20:10:45 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int			not_numbe(char *str);
int			nb_ok(char *str);
int			is_number(char *str);
int			is_alpha(char *str);

int	long	ft_atoi(char *str);
void		ft_putstr(char *str);
int			ft_strlen(char *str);

typedef struct s_stack
{
	int				nb;
	struct	s_stack	*next;
}	t_stack;

t_stack	*new_stack(int number);
void	add_last(t_stack	**lst, t_stack	*new);
char	**ft_split(const char *s, char c);
void	section(char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);

# endif



