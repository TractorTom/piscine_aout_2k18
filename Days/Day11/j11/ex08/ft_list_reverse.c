/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 19:00:04 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/17 16:53:51 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_decalle(t_list **begin_list)
{
	void	*val;

	if ((*begin_list)->next == NULL)
		return ;
	else
	{
		val = (*begin_list)->data;
		(*begin_list)->data = ((*begin_list)->next)->data;
		((*begin_list)->next)->data = val;
		ft_decalle(&((*begin_list)->next));
	}
}

void	ft_list_reverse(t_list **begin_list)
{
	if (*begin_list == NULL || (*begin_list)->next == NULL)
		return ;
	else
	{
		ft_list_reverse(&((*begin_list)->next));
		ft_decalle(begin_list);
	}
}
