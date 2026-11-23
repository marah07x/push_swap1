/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsaleh <marsaleh@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 09:05:33 by marsaleh          #+#    #+#             */
/*   Updated: 2026/11/23 09:05:33 by marsaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void quick_sort(t_list **a, t_list **b)
{
    t_list *head;
    t_list *pivot;
    int size;
    int i;
    head = *a;
    size = ft_lstsize(*a);
    pivot = ft_lstlast(*a);
    i = 0;



    if (size <= 1)
        return;
    if (size== 2 && ((*a)->index > ((*a)->next)->index))
        sa(*a);
    while (i < size)
    {
        if (head->index < pivot->index)
            pb(a,b);
        else
            ra(a);
        i++;
    }
    i = 0;
    while (i < ft_lstsize(b))
    {
        pa(a,b);
        i++;
    }
    if (is_sorted(*a))
        return ;
    else
        quick_sort(a, b);

}