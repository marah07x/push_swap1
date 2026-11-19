/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsaleh <marsaleh@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 11:24:19 by marsaleh          #+#    #+#             */
/*   Updated: 2026/11/19 11:38:59 by marsaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "printf/ft_printf.h"
# include <limits.h>

int	is_duplicate(t_list *a, int value);
int	parser(int argc, char **argv, t_list **a);

void	stack_free(t_list **lst);

t_list	*lst_pop(t_list **lst);
t_list	*lst_pop_last(t_list **lst);
int		is_num(char *input);

int		to_num(char *s, int *res);
void	swap(t_list *head);
void	sa(t_list *a);
void	sb(t_list *b);
void	ss(t_list *a, t_list *b);
void	push(t_list **src, t_list **dst);
void	pa(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);
void	rotate(t_list **head);
void	ra(t_list **a);
void	rb(t_list **b);
void	rr(t_list **a, t_list **b);
void	reverse(t_list **head);
void	rra(t_list **a);
void	rrb(t_list **b);
void	rrr(t_list **a, t_list **b);
double	compute_disorder(t_list *a);
int		*operations_count(void);
t_list	*selction_sort(t_list **a, t_list **b);
void	print_op_count(char *operation, int count);
void	chunk_based(t_list **a, t_list **b);
void	rank_list(t_list *a);

#endif
