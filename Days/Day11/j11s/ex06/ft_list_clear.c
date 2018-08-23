/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 16:12:12 by tbarthel          #+#    #+#             */
/*   Updated: 2018/08/17 02:45:16 by tbarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*liste;

	if (*begin_list == NULL)
		return ;
	else if ((*begin_list)->next == NULL)
		free(*begin_list);
	else
	{
		liste = (*begin_list)->next;
		free(*begin_list);
		ft_list_clear(&(liste));
	}
	*begin_list = NULL;
}
