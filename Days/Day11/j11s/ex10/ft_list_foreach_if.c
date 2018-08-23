/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 01:06:23 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/22 02:17:37 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
		void *data_ref, int (*cmp)(void *, void *))
{
	if (begin_list == NULL)
		return ;
	else
	{
		if (cmp(data_ref, begin_list->data) == 0)
			f(begin_list->data);
		ft_list_foreach_if(begin_list->next, f, data_ref, cmp);
	}
}
