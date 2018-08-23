/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 02:19:33 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/22 02:18:03 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*liste;

	if (*begin_list == NULL)
		return ;
	else if ((*begin_list)->next == NULL)
	{
		if (cmp((*begin_list)->data, data_ref) == 0)
			*begin_list = NULL;
	}
	else
	{
		if (cmp((*begin_list)->data, data_ref) == 0)
		{
			liste = (*begin_list)->next;
			free(*begin_list);
			*begin_list = liste;
		}
		ft_list_remove_if(&((*begin_list)->next), data_ref, cmp);
	}
}
