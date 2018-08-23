/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 17:30:46 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/22 14:49:08 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

t_list	*ft_create_elem(t_rectangle rect)
{
	t_list	*liste;

	liste = malloc(sizeof(t_list));
	if (!liste)
		return (liste);
	liste->next = NULL;
	liste->data = rect;
	return (liste);
}

void	ft_add_rect(t_list **end_list, t_rectangle rect)
{
	t_list	*liste;

	liste = ft_create_elem(rect);
	liste->next = *end_list;
	*end_list = liste;
}

int		ft_list_size(t_list *liste)
{
	if (liste == NULL)
		return (0);
	else if (liste->next == NULL)
		return (1);
	else
		return (1 + ft_list_size(liste->next));
}
