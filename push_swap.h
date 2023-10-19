/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 14:50:30 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/10/18 21:21:44 by mnshimiy         ###   ########.fr       */
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
	int				index;
	int				chunks;
	int				on;
	int				move;
	int				ra_rra;
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
void		rr(t_stack **first, t_stack **second);
void		rotate_a(t_stack **stack, char *str);
void		reverse_rotate_a(t_stack **stack, char *str);
void		push_a(t_stack **stack_a, t_stack **stack_b);
void		push_b(t_stack **stack_a, t_stack **stack_b);
t_stack		*search_list(t_stack *stack, int position);
void		delete_first(t_stack **stack);
char		**ft_split(const char *s, char c);
t_stack		*add_on_stack(char **str, t_stack *save);
t_stack		*argc_bigger_two(char **argv, int len_argc);
char		*ft_substr(char const *s, unsigned int start, size_t len);
void		printlst(t_stack	**stack);
void		swap_a_b(t_stack *list, char *str);
int			lstsize(t_stack *lst);

void		sort_three(t_stack **stack);
void		sort_five(t_stack **stack, t_stack **stack_b);
void		sort_hundred(t_stack **stack, t_stack **stack_b);
t_stack		**put_index(t_stack **stack, int i);
t_stack		**chunks(t_stack **stack, int nb);
t_stack		*hold_number(t_stack **stack, int chunks, int len);
t_stack		*is_first(t_stack **stack, int chunk , int middle);
void		up_or_dwon(t_stack **stack, int move, int up_down);
int			fund_chunks(t_stack **stack, int chunk, int middle, int n);
void		check_stack_b(t_stack **stack, t_stack **stack_b);
int			first_count_move(t_stack **stack, t_stack *list);
int			second_count_move(t_stack **stack, t_stack *list);
int			is_followed(t_stack **stack);
# endif
