/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 14:50:30 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/09/19 19:49:36 by mnshimiy         ###   ########.fr       */
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

typedef struct s_info
{
	int position;
	int position_one;
	char *str;
}	t_infos;

t_stack		*new_stack(void);
void		add_last(t_stack	*lst, int newnb);
void		swap_list(t_stack *stack, int position, int position_one);
t_infos		*struc_infos(t_infos *info, int position, int position_one, char *str);
char		**ft_split(const char *s, char c);
t_stack		*on_stack(char *str, t_stack *save);
t_stack		*argc_bigger_two(char **argv, int len_argc);
char		*ft_substr(char const *s, unsigned int start, size_t len);
void		printlst(t_stack	*stack);
void		swap_a_b(t_stack *list, t_infos *infos);
int			lstsize(t_stack *lst);
# endif



