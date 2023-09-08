/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 14:50:30 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/09/07 19:49:06 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int				not_numbe(char *str);
int				nb_ok(char *str);
int				is_number(char *str);
int				is_alpha(char *str);

long	int		ft_atoi(char *str);
void			ft_putstr(char *str);
int				ft_strlen(char *str);

typedef struct s_stack
{
	int				nb;
	struct	s_stack	*next;
}	t_stack;

t_stack		*new_stack(void);
void		add_last(t_stack	*lst, int newnb);
char		**ft_split(const char *s, char c);
t_stack		*section(char *str, t_stack *save);
char		*ft_substr(char const *s, unsigned int start, size_t len);
void		printlst(t_stack	*stack);
void		swap_a(t_stack *list);
int			lstsize(t_stack *lst);
# endif



