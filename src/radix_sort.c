/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shokahn <shokahn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 11:38:04 by mnirska           #+#    #+#             */
/*   Updated: 2025/05/14 01:14:20 by shokahn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	get_maxbits_lst(t_list **a)
{
	t_list	*lst;
	int		max;
	int		max_b;

	lst = *a;
	max = lst->i;
	max_b = 0;
	while (lst)
	{
		if (lst->i > max)
			max = lst->i;
		lst = lst->next;
	}
	while ((max >> max_b) != 0)
		max_b++;
	return (max_b);
}
/* void test(t_list **a)
{
	t_list *tmp = *a;
	while (tmp)
	{
		printf("%d = %d\n", tmp->i, tmp->content);
		tmp = tmp->next;
	}
} */

void	radix_sort(t_list **a, t_list **b, int *count)
{
	t_list	*lst;
	int		i;
	int		j;
	int		size;
	int		max_b;

	lst = *a;
	size = lst_size(*a);
	max_b = get_maxbits_lst(a);
	i = -1;
	while (++i < max_b)
	{
		j = -1;
		while (++j < size)
		{
			lst = *a;
			if (((lst->i >> i) & 1) == 0)
				pb(a, b, count);
			else
				ra(a, count);
		}
		while (lst_size(*b) != 0)
			pa(a, b, count);
	}
	//test(a);
}
