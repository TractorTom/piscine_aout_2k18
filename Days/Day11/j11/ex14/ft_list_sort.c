/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 03:07:35 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/17 04:27:57 by tbarthel         ###   ########.fr       */
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

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	if (*begin_list == NULL || (*begin_list)->next == NULL)
		return ;
	else
	{
		ft_list_sort(&((*begin_list)->next), cmp);
		ft_insert(begin_list, cmp);
	}
}
