/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shokahn <shokahn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 10:44:23 by mnirska           #+#    #+#             */
/*   Updated: 2025/05/14 01:14:40 by shokahn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		split[i] = NULL;
		i++;
	}
	free(split);
}

int	is_sorted(t_list **lst)
{
	t_list	*temp;

	temp = *lst;
	while (temp->next)
	{
		if (temp->i > temp->next->i)
			return (-1);
		temp = temp->next;
	}
	return (1);
}

void	rotate_to_min(t_list **lst, int size, int *count, int target_index)
{
	t_list	*tmp;
	int		pos;

	tmp = *lst;
	pos = 0;
	while (tmp)
	{
		if (tmp->i == target_index)
			break ;
		pos++;
		tmp = tmp->next;
	}

	if (pos <= size / 2)
		while (pos-- > 0)
			ra(lst, count);
	else
		while (pos++ < size)
			rra(lst, count);
}
