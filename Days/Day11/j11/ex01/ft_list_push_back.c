/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 14:27:23 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/20 04:22:17 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*liste;

	liste = ft_create_elem(data);
	if (*begin_list == NULL)
		*begin_list = liste;
	else if ((*begin_list)->next == NULL)
		(*begin_list)->next = liste;
	else
		ft_list_push_back(&((*begin_list)->next), data);
}
