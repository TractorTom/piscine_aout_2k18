/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 15:08:38 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/20 17:40:48 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **end_list, void *data)
{
	t_list	*liste;

	liste = ft_create_elem(data);
	liste->next = *end_list;
	*end_list = liste;
}
