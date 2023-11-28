/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 14:50:30 by mnshimiy          #+#    #+#             */
/*   Updated: 2023/11/24 19:58:27 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef struct s_stack
{
	int				nb;
	int				index;
	int				chunks;
	int				on;
	int				move;
	int				ra_rra;
	struct s_stack	*next;
}	t_stack;

long int	ft_atoi(const char *str);
int			not_numbe(char *str);
int			nb_ok(char *str);
int			is_number(char *str);
int			is_alpha(char *str);
void		ft_putstr(char *str);
int			ft_strlen(char *str);
long int	min_max(long int n);

t_stack		*new_stack(void);
void		add_last(t_stack	*lst, int newnb, int index);
void		add_stack(t_stack	*lst, int newnb);
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
void		sort_hundred(t_stack **stack, t_stack **stack_b, int i);
t_stack		*hold_number(t_stack **stack, int i, int number);
void		up_or_down(t_stack **stack, t_stack *list);
void		five_up_or_down(t_stack **stack, t_stack *list);
void		check_stack_b(t_stack **stack, t_stack **stack_b);
void		push_biger(t_stack **stack, t_stack **stack_b);
int			small_number(t_stack **stack);
void		big_number(t_stack **stack, t_stack **stack_b, int bewteen);
void		five_hundred(t_stack **stack, t_stack **stack_b, int i);
int			duplicate(t_stack **stack);
int			is_sort(t_stack **stack);
void		free_stack(t_stack *stack);
t_stack		*put_index(t_stack **stack);
int			len_by_index(t_stack **stack);
int			is_chunks_in_stack(t_stack **stack, int start);
void		still_numbe_f(t_stack **stack, t_stack **stack_b);
void		reset_on(t_stack **stack);
t_stack		*small_five(t_stack **stack, int i, int number);
#endif
