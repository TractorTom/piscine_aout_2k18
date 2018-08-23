/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 04:23:33 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/17 04:36:44 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_insert(t_list **begin_list, int (*cmp)())
{
	void	*val;

	if (*begin_list == NULL || (*begin_list)->next == NULL)
		return ;
	else
	{
		if (cmp((*begin_list)->data, ((*begin_list)->next)->data) > 0)
		{
			val = (*begin_list)->data;
			(*begin_list)->data = ((*begin_list)->next)->data;
			((*begin_list)->next)->data = val;
			ft_insert(&((*begin_list)->next), cmp);
		}
		else
			return ;
	}
}

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2,
		int (*cmp)())
{
	t_list	*liste;

	if (begin_list2 == NULL)
		return ;
	else
	{
		liste = begin_list2->next;
		begin_list2->next = *begin_list1;
		*begin_list1 = begin_list2;
		begin_list2 = liste;
		ft_insert(begin_list1, cmp);
		ft_sorted_list_merge(begin_list1, begin_list2, cmp);
	}
}
