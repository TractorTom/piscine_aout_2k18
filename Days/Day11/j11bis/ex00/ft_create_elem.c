/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 14:13:30 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/20 17:43:22 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_create_elem(void *data)
{
	t_list	*liste;

	liste = malloc(sizeof(t_list));
	if (!liste)
		return (liste);
	liste->next = NULL;
	liste->data = data;
	return (liste);
}
